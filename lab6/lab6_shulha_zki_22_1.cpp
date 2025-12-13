#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double fahrenheit_to_celsius(double temp_f);
double fahrenheit_to_kelvin(double temp_f);
void print_guest_list(const string guest_list[], size_t size);
void clear_guest_list(string guest_list[], size_t size);
int sum_of_digits(int n);

int main() {
    
    double bill_total {0.0};
    int number_of_guests {0};

    cout << "Enter the total bill amount: ";
    cin >> bill_total;
    cout << "Enter the number of guests: ";
    cin >> number_of_guests;

    double individual_bill = bill_total / number_of_guests;

    double individual_bill_1 = floor(individual_bill);
    double individual_bill_2 = round(individual_bill);
    double individual_bill_3 = ceil(individual_bill);

    cout << "The individual bill at location 1 will be $" << individual_bill_1 << endl;
    cout << "The individual bill at location 2 will be $" << individual_bill_2 << endl;
    cout << "The individual bill at location 3 will be $" << individual_bill_3 << endl;

    double temp_f {0.0};
    cout << "\nEnter temperature in Fahrenheit: ";
    cin >> temp_f;

    cout << "Temperature in Celsius: " << fahrenheit_to_celsius(temp_f) << endl;
    cout << "Temperature in Kelvin: " << fahrenheit_to_kelvin(temp_f) << endl;

    string guest_list[] = {"Ivan", "Maria", "Oleg"};
    size_t guest_list_size {3};

    cout << endl;
    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);

    int n {0};
    cout << "\nEnter a number to find sum of digits: ";
    cin >> n;
    
    cout << "Sum of digits for " << n << " is: " << sum_of_digits(n) << endl;

    cout << endl;
    return 0;
}

double fahrenheit_to_celsius(double temp_f) {
    return (temp_f - 32.0) * 5.0 / 9.0;
}

double fahrenheit_to_kelvin(double temp_f) {
    double celsius = fahrenheit_to_celsius(temp_f);
    return celsius + 273.15;
}

void print_guest_list(const string guest_list[], size_t size) {
    for (size_t i {0}; i < size; ++i) {
        cout << guest_list[i] << endl;
    }
}

void clear_guest_list(string guest_list[], size_t size) {
    for (size_t i {0}; i < size; ++i) {
        guest_list[i] = " ";
    }
}

int sum_of_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum_of_digits(n / 10);
}