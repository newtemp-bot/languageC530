#include <iostream>
using namespace std;

class Demo {
public:
    int value;

    // Constructor with pointer argument
    Demo(const int *value = NULL) : value(0) {
        if (value != NULL)
            this->value = *value;
    }

    // Copy constructor
    Demo(const Demo &obj) { // Use a reference instead of a pointer for efficiency
        this->value = obj.value;
    }
};

int main() {
    int x = 90;
    Demo d1(&x);            // Create an object using the default constructor
    Demo d2(d1);        // Use the copy constructor
    cout << d2.value;   // Access the value of d2
    return 0;
}
