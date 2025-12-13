#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    std::string name;
    int age;
public:
    
    // Your sollution for Exercise 1
    Dog(std::string name_val, int age_val) 
        : name{name_val}, age{age_val} {
    }


    // Your sollution for Exercise 2
    Dog(const Dog &source) 
        : name{source.name}, age{source.age} {
        cout << "Copy Constructor" << endl;
    }


};


int main() {
    
    // Exercise 1
    Dog fido {"Fido", 4};
    Dog buddy {"Buddy", 7};    


    // Exercise 2   
    Dog spot {"Spot", 5};
    Dog twin {spot};

    cout << endl;
    return 0;
}
 