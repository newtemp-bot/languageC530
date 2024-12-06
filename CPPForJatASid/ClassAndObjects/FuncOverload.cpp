#include <iostream>
using namespace std;
struct Car
{
    int id;
    char name[150];
};

class Demo
{
    int y = 50;
public:
    int x = 10;
    void dis();//Declare;//Member Function
    void dis(int x)
    {
        cout << "Normal Display2";
    }
    friend void thisFriend(Demo);
};

void thisFriend(Demo obj)
{
    cout<<" "<<obj.y;
}

int main()
{
    Demo obj;
    obj.dis(50);
    thisFriend(obj);
}

void Demo :: dis()//Define
{
    cout << "Normal Display1";
}