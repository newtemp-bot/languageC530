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
        Demo operator-(const Demo &obj)
        {
            Demo temp;
            temp.a = this->a - obj.a;
            temp.b = this->b - obj.b;
            return temp;
        }
        Demo operator*(const Demo &obj)
        {
            Demo temp;
            temp.a = this->a * obj.a;
            temp.b = this->b * obj.b;
            return temp;
        }
        bool operator==(const Demo &obj)
        {
            return (this->a == obj.a && this->b == obj.b);
        }
};

int main()
{
    Demo d1(10, 20);
    Demo d2(30, 40);
    Demo d3 = d1 + d2;
    Demo d4 = d1 - d2;
    Demo d5 = d1 * d2;
    bool isEqual = (d1 == d2);
    
    d3.dis();
    d4.dis();
    d5.dis();
    cout << "d1 and d2 are " << (isEqual ? "equal" : "not equal") << endl;
}