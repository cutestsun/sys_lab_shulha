#include <iostream>
#include <string>

using namespace std;

class Cat {
public:
    std::string name;
    int age;
};


class Dog {
private:
    std::string name;
    int age;
    
public: 
    
    std::string get_name() {
        return name;
    }
    
    void set_name(std::string new_name) {
        name = new_name;
    }
    
    int get_age() {
        return age;
    }
    
    void set_age(int new_age) {
        age = new_age;
    }

    int get_human_years() {
        return age * 7;
    }
    
    std::string speak() {
        return "Woof";
    }

};


Cat test_cat() {
    Cat fluffy;
    fluffy.name = "Fluffy";
    fluffy.age = 5;
    return fluffy;
}


int main() {
    
    // Your sollution for Exercise 1
    Cat fluffy_cat = test_cat();
    

    // Your sollution for Exercise 2
    Dog spot;
    spot.set_name("Spot");
    spot.set_age(7);
    cout << spot.get_name() << endl;
    cout << spot.get_age() << endl;
    
    

    // Your sollution for Exercise 3
    cout << spot.get_human_years() << endl;
    cout << spot.speak() << endl;


    cout << endl;
    return 0;
}