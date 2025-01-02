#include <iostream>

using namespace std;

class Example {
public:
    static void display() {
        cout << "Hello, World!" << endl;
    }
};

int main() {
    Example::display();
    return 0;
}