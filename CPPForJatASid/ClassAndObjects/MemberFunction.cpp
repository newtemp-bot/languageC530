#include <iostream>
using namespace std;
class Students
{
    int pv = 150;
public:
    int x = 50;
    void dis();//member function//Declared Function
    friend void friendFunction(Students);//friend function //Gloable function
};
void friendFunction(Students o)
{
    cout<<"Hello Friend..";
    cout<<o.pv;//you can access private and protacted members using friend function.
}
int main()
{
    Students s1;
    //s1.pv;//it give error
    s1.dis();
    friendFunction(s1);
}
void Students :: dis()
{
    cout << "Your X is = " << x;
}
