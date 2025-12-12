#include <iostream>

using namespace std;

int main() {
    
    // ==========================================
    // Your solution for Exercise 1
    // ==========================================
    cout << "--- Task 1 (Simple If) ---" << endl;
    
    int age {}; // Ініціалізація нулем
    
    cout << "Enter your age: ";
    cin >> age;
    
    // Якщо 16 або більше - виводимо повідомлення
    if (age >= 16) {
        cout << "Yes - you can drive!" << endl;
    }
    // Якщо менше 16, нічого не робимо (згідно завдання)


    // ==========================================
    // Your solution for Exercise 2
    // ==========================================
    cout << "\n--- Task 2 (Nested Ifs) ---" << endl;
    
    // Оголошуємо змінні. Для has_car використовуємо int для вводу, 
    // оскільки cin >> bool не завжди зручний для користувача, 
    // але завдання просить булеву змінну, тому зробимо через boolalpha або проміжну змінну.
    // Зробимо найпростіше: введемо bool (0 або 1).
    
    int age_task2 {};
    bool has_car {false};
    
    cout << "Enter your age: ";
    cin >> age_task2;
    
    cout << "Do you have a car? (1 for Yes, 0 for No): ";
    cin >> has_car;
    
    // Вкладені перевірки
    if (age_task2 < 16) {
        int years_to_wait {16 - age_task2};
        cout << "Sorry, come back in " << years_to_wait << " years and be sure you own a car when you come back." << endl;
    } else {
        // Якщо сюди дійшли, значить age >= 16
        if (has_car) {
            cout << "Yes - you can drive!" << endl;
        } else {
            cout << "Sorry, you need to buy a car before you can drive!" << endl;
        }
    }


    // ==========================================
    // Your solution for Exercise 3
    // ==========================================
    cout << "\n--- Task 3 (Switch Day of Week) ---" << endl;

    int day_code {};
    
    cout << "Enter day code (0-6): ";
    cin >> day_code;
    
    // Використання switch для перевірки конкретних значень
    switch (day_code) {
        case 0:
            cout << "Sunday" << endl;
            break;
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        default:
            cout << "Error - illegal day code" << endl;
    }


    cout << endl;
    return 0;
}