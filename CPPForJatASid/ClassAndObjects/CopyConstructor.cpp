#include <iostream>
using namespace std;
class Demo
{

public:
    int value;
    Demo(int value) : value(0)
    {
        this->value = value;
    };
    Demo(const Demo &obj)
    {
        this->value = obj.value;
    };
};
int main()
{
    Demo d1(50), d2(d1);
    cout << d2.value;
}