#include <iostream>
using namespace std;
class Demo
{
    public:
        int a;
        int b;
        Demo(){}
        Demo(int a,int b)
        {
            this->a = a;
            this->b = b;
        }
        void dis()
        {
            cout<<"A = "<<a<<", B = "<<b<<endl;
        }
        Demo operator+(const Demo &obj)
        {
            Demo temp;
            temp.a = this->a + obj.a;
            temp.b = this->b + obj.b;
            return temp;
        }
        operator float() const
        {
            return (float)a / b;
        }
};
int main()
{
    Demo d1(5, 2);
    float c = d1;
    cout << c << endl;
}