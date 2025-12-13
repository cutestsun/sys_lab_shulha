#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // Task 1
    int sum {0};

    for (int i {1}; i <= 15; ++i) {
        if (i % 2 != 0) { 
            sum += i;
        }
    }

    cout << "The sum of odd integers from 1 to 15 is: " << sum << endl;


    // Task 2
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    int count {0};

    for (auto val : vec) {
        if ((val % 3 == 0) || (val % 5 == 0)) {
            count++;
        }
    }
    
    cout << "Count of elements divisible by 3 or 5: " << count << endl;

    cout << endl;
    return 0;
}