#include <iostream>
using namespace std;
class Stu{
    public:
    int x;
    string name;
    void dis()
    {
        cout<<"display function called..";
    }
};
int main()
{
    Stu s1;
    s1.x = 50;
    s1.name = "hello";
    cout<<s1.x;
    cout<<s1.name;
    s1.dis();
}