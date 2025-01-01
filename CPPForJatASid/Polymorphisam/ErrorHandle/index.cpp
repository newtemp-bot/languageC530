#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
    /* int a = 10;
    int b = 0;
    if (b == 0)
    {
        cout<< "Division by zero error";
        return 1;
    }
    int c = a / b;
    cout << "Result: " << c << endl; */

    try {
        int a = 10;
        int b = 0;
        
        if (b == 0) {
            throw runtime_error("Division by zero error");
        }
        int c = a / b;
        cout << "Result: " << c << endl;
    } 
    catch (const exception& e)
    {
        cerr << "Error: "<<e.what() << endl;
    }
    catch (...) {
        cerr << "An unexpected error occurred." << endl;
    }

    return 0;
}