#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // ----------------------------------------------------------------------
    // 1. Checking Accounts (Перевірка комісії $1.50)
    // ----------------------------------------------------------------------
    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account {} );
    check_accounts.push_back(Checking_Account {"Kirk"} );
    check_accounts.push_back(Checking_Account {"Spock", 2000} );
    check_accounts.push_back(Checking_Account {"Bones", 5000} );

    display(check_accounts);
    
    // Спробуємо поповнити
    deposit(check_accounts, 1000);
    
    // Спробуємо зняти 2000. 
    // Spock має 3000 (2000 + 1000), зняття: 2000 + 1.50 комісія = 2001.50. Має вистачити.
    // Bones має 6000. Має вистачити.
    // Kirk має 1000. Не вистачить (баланс піде в мінус).
    withdraw(check_accounts, 2000); 
    
    display(check_accounts); // Перевіримо, чи знялась комісія $1.50

    // ----------------------------------------------------------------------
    // 2. Trust Accounts (Перевірка бонусу $50 та лімітів на зняття)
    // ----------------------------------------------------------------------
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {} );
    trust_accounts.push_back(Trust_Account {"Athos", 10000, 5.0} );
    trust_accounts.push_back(Trust_Account {"Porthos", 20000, 4.0} );
    trust_accounts.push_back(Trust_Account {"Aramis", 30000} );

    display(trust_accounts);
    
    // Тест депозиту: Поповнюємо на 1000 (без бонусу)
    deposit(trust_accounts, 1000);
    
    // Тест депозиту: Поповнюємо на 5000 (Має додатися бонус $50 => разом $5050 + відсотки)
    deposit(trust_accounts, 5000); 
    
    display(trust_accounts);

    // Тест зняття:
    // У Athos зараз близько 16000. 20% від цього ~3200.
    // Спробуємо зняти 1000 (це менше 20%, має пройти).
    // Повторимо 4 рази. Перші 3 рази мають пройти, 4-й — провалитися через ліміт кількості.
    
    cout << "\n=== Testing Trust Account Withdrawals (Limit 3 per year) ===" << endl;
    for (int i = 1; i <= 4; i++) {
        cout << "\n--- Withdrawal attempt #" << i << " ---" << endl;
        withdraw(trust_accounts, 1000);
    }
    
    // Тест зняття: Спробуємо зняти занадто багато (більше 20% балансу)
    // У Porthos > 20000. 20% це > 4000. Спробуємо зняти 5000.
    cout << "\n--- Withdrawal attempt (Amount > 20% of balance) ---" << endl;
    withdraw(trust_accounts, 5000); // Має провалитися для всіх Trust аккаунтів

    display(trust_accounts);

    return 0;
}