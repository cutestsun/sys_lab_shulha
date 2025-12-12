#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    
    int small_rooms = 0;
    int large_rooms = 0;    
    cout << "\nHow many small rooms would you like cleaned? ";
    cin >> small_rooms;
    
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;
    
    const double price_small = 25.0;
    const double price_large = 35.0;
    const double sales_tax = 0.06;
    const int estimate_expiry = 30;
    
    double cost = (small_rooms * price_small) + (large_rooms * price_large);
    double tax = cost * sales_tax;
    double total_estimate = cost + tax;

    cout << "\nКалькуляція вартості послуги прибирання кімнат:" << endl;
    cout << "Кількість маленьких кімнат: " << small_rooms << endl;
    cout << "Кількість великих кімнат: " << large_rooms << endl;
    
    cout << "Ціна за маленьку кімнату: $" << price_small << endl;
    cout << "Ціна за велику кімнату: $" << price_large << endl;
    
    cout << "Вартість: $" << cost << endl;
    cout << "Податок: $" << tax << endl;
    cout << "===============================" << endl;
    cout << "Загальна вартість: $" << total_estimate << endl;
    cout << "Дана калькуляція дійсна протягом " << estimate_expiry << " днів" << endl;
    
    cout << endl;
    return 0;
}