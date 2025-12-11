#include <iostream>
#include <string>

using namespace std;

int main() {
    // Змінні для збереження даних
    string name;
    int day, month, year;

    // Введення імені
    cout << "Enter your name: ";
    cin >> name;

    // Введення дати народження (через пробіл)
    cout << "Enter your birth date (dd mm yyyy): ";
    cin >> day >> month >> year;

    // Виведення привітання
    cout << "\nNice to meet you, " << name << "!" << endl;
    cout << "Do you know that your birth date will have different format in different countries?" << endl;
    
    // Форматування та виведення дати
    cout << "For example:" << endl;

    // Польща (YYYY-MM-DD)
    cout << "-- Poland: " << year << "-" << month << "-" << day << endl;

    // Фінляндія (D.M.YYYY)
    cout << "-- Finland: " << day << "." << month << "." << year << endl;

    // Іспанія (DD/MM/YYYY)
    cout << "-- Spain: " << day << "/" << month << "/" << year << endl;

    // США (MM/DD/YYYY)
    cout << "-- USA: " << month << "/" << day << "/" << year << endl;

    return 0;
}