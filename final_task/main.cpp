#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int MENU_EXIT = 0;
const int MENU_ADD = 1;
const int MENU_REMOVE = 2;
const int MENU_LIST_BY_TYPE = 3;
const int MENU_COUNT = 4;
const int MENU_SHOW_ALL = 5;

class Vehicle {
private:
    string plateNumber;
    string brand;
    string type;

public:
    Vehicle(string p, string b, string t) : plateNumber(p), brand(b), type(t) {}

    string getPlate() const { return plateNumber; }
    string getType() const { return type; }

    friend ostream& operator<<(ostream& os, const Vehicle& v) {
        os << "Номер: " << v.plateNumber << " | Марка: " << v.brand << " | Тип: " << v.type;
        return os;
    }

    bool operator==(const string& otherPlate) const {
        return this->plateNumber == otherPlate;
    }
};

void addVehicle(vector<Vehicle>& fleet) {
    string p, b, t;
    cout << "Введіть номерний знак: ";
    cin >> p;
    cout << "Введіть марку: ";
    cin >> b;
    cout << "Введіть тип (Car/Bus/Truck): ";
    cin >> t;

    fleet.emplace_back(p, b, t);
    cout << "Транспорт успішно додано!\n";
}

void removeVehicle(vector<Vehicle>& fleet) {
    string p;
    cout << "Введіть номер для видалення: ";
    cin >> p;

    bool found = false;
    for (size_t i = 0; i < fleet.size(); ++i) {
        if (fleet[i] == p) {
            fleet.erase(fleet.begin() + i);
            found = true;
            cout << "Транспорт видалено.\n";
            break;
        }
    }

    if (!found) cout << "Транспорт з таким номером не знайдено.\n";
}

void listByType(const vector<Vehicle>& fleet) {
    string t;
    cout << "Введіть тип для пошуку: ";
    cin >> t;

    cout << "\n--- Транспорт типу '" << t << "' ---\n";
    int count = 0;
    for (const auto& v : fleet) {
        if (v.getType() == t) {
            cout << v << endl;
            count++;
        }
    }
    
    if (count == 0) cout << "Нічого не знайдено.\n";
}

void showCount(const vector<Vehicle>& fleet) {
    cout << "Загальна кількість транспорту: " << fleet.size() << endl;
}

void printAll(const vector<Vehicle>& fleet) {
    if (fleet.empty()) {
        cout << "Список порожній.\n";
        return;
    }
    cout << "\n--- Весь список ---\n";
    for (const auto& v : fleet) {
        cout << v << endl;
    }
}

int main() {
    vector<Vehicle> fleet;
    int choice;

    do {
        cout << "\n=== СИСТЕМА УПРАВЛІННЯ ТРАНСПОРТОМ ===\n";
        cout << MENU_ADD << ". Додати транспорт\n";
        cout << MENU_REMOVE << ". Видалити транспорт\n";
        cout << MENU_LIST_BY_TYPE << ". Список за типом\n";
        cout << MENU_COUNT << ". Кількість транспорту\n";
        cout << MENU_SHOW_ALL << ". Показати все\n";
        cout << MENU_EXIT << ". Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
            case MENU_ADD: addVehicle(fleet); break;
            case MENU_REMOVE: removeVehicle(fleet); break;
            case MENU_LIST_BY_TYPE: listByType(fleet); break;
            case MENU_COUNT: showCount(fleet); break;
            case MENU_SHOW_ALL: printAll(fleet); break;
            case MENU_EXIT: cout << "Завершення роботи...\n"; break;
            default: cout << "Невірний вибір. Спробуйте ще раз.\n";
        }
    } while (choice != MENU_EXIT);

    return 0;
}