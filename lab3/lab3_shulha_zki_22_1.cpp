#include <iostream>

using namespace std;

int main() {
    
    // ==========================================
    // Your solution for Exercise 1
    // ==========================================
    cout << "--- Task 1 ---" << endl;
    
    int num1 {13};
    int num2 {0};
    
    num1 = 5;       // Змінюємо значення num1 на 5
    num2 = num1;    // Присвоюємо num2 значення num1
    
    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;


    // ==========================================
    // Your solution for Exercise 2
    // ==========================================
    cout << "\n--- Task 2 ---" << endl;
    
    int original_number {4};
    int number = original_number; // Призначаємо змінній number значення original_number
    
    cout << "Start value: " << number << endl;
    
    number = number * 2;
    cout << "After * 2: " << number << endl;
    
    number = number + 9;
    cout << "After + 9: " << number << endl;
    
    number = number - 3;
    cout << "After - 3: " << number << endl;
    
    number = number / 2;
    cout << "After / 2: " << number << endl;
    
    number = number - original_number;
    cout << "After - original: " << number << endl;
    
    number = number % 3;
    cout << "After % 3: " << number << endl; // Має вийти 0


    // ==========================================
    // Your solution for Exercise 3
    // ==========================================
    cout << "\n--- Task 3 (Hiring Driver) ---" << endl;

    int age {};
    bool parental_consent {false};
    bool ssn {false};
    bool accidents {false};

    // Введення даних (використовуємо boolalpha для введення true/false текстом, або 1/0)
    cout << "Enter age: ";
    cin >> age;
    
    cout << "Has parental consent? (1 for yes, 0 for no): ";
    cin >> parental_consent;
    
    cout << "Has valid SSN? (1 for yes, 0 for no): ";
    cin >> ssn;
    
    cout << "Has accidents history? (1 for yes, 0 for no): ";
    cin >> accidents;

    // Логіка перевірки:
    // 1. (18+ АБО (15+ І згода батьків))
    // 2. І має SSN
    // 3. І НЕ має аварій
    bool is_eligible = ((age >= 18) || (age > 15 && parental_consent)) && ssn && !accidents;

    if (is_eligible) {
        cout << "You are hired!" << endl;
    } else {
        cout << "Sorry, we cannot hire you!" << endl;
    }


    // ==========================================
    // Your solution for Exercise 4
    // ==========================================
    cout << "\n--- Task 4 (Coins Calculator) ---" << endl;
    
    int cents {0};
    
    cout << "Enter sum in cents: ";
    cin >> cents;

    // Оголошення номіналів
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {};
    
    // Логіка розрахунку за допомогою ділення (/) та модуля (%)
    
    // 1. Рахуємо долари
    dollars = cents / dollar_value; 
    cents = cents % dollar_value;   // Залишаємо тільки те, що не влізло в долари

    // 2. Рахуємо 25 копійок
    quarters = cents / quarter_value;
    cents = cents % quarter_value;

    // 3. Рахуємо 10 копійок
    dimes = cents / dime_value;
    cents = cents % dime_value;

    // 4. Рахуємо 5 копійок
    nickels = cents / nickel_value;
    cents = cents % nickel_value;

    // 5. Все, що залишилось - це пенні (1 копійка)
    pennies = cents;

    cout << "You can get this amount with:" << endl;
    cout << "dollars:  " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes:    " << dimes << endl;
    cout << "nickels:  " << nickels << endl;
    cout << "pennies:  " << pennies << endl;

    cout << endl;
    return 0;
}