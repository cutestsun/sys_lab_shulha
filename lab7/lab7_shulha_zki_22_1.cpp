#include <iostream>

using namespace std;

void swap_pointers(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    /* Спосіб БЕЗ тимчасової змінної (як просили спробувати в умові)
    Використовує арифметику (сума/різниця). 
    Примітка: це працює, але може викликати переповнення для великих чисел.
    if (ptr1 != ptr2) {
        *ptr1 = *ptr1 + *ptr2;
        *ptr2 = *ptr1 - *ptr2;
        *ptr1 = *ptr1 - *ptr2;
    }
    */
}

void multiply_with_pointer(int* ptr, int multiplier) {
    *ptr = *ptr * multiplier;
}

int findMaxElement(int* arr, int size) {
    int maxElement = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > maxElement) {
            maxElement = *(arr + i);
        }
    }
    return maxElement;
}

int main() {
    
    // Your solution for Exercise 1
    int a = 5;
    int b = 10;
    swap_pointers(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;


    // Your solution for Exercise 2
    int num = 10;
    int multiplier = 5;
    multiply_with_pointer(&num, multiplier);
    cout << "Result: " << num << endl;

    
    // Your solution for Exercise 3
    int arr[] = {12, 45, 67, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMaxElement(arr, size);
    cout << "Max: " << max << endl;





    cout << endl;
    return 0;
}