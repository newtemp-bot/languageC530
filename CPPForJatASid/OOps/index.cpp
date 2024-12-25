#include <iostream>
using namespace std;

//single
/* class Base // parents
{
public:
    void display()
    {
        cout<<"Hello";
    }
};
class Derived : public Base //child
{
public:
}; */

//Hierarchical Inheritance
class Animal
{
    public:
        void run()
        {
            cout<<"Animal can run";
        }
};
class Cat : public Animal
{
    public:
        void speak()
        {
            cout<<"meaw meaw";
        }
};
class Dog : public Animal
{
    public:
        void speak()
        {
            cout<<"bow bow";
        }
};

//Multi Level
class Base // grand parents
{
public:
    void display()
    {
        cout<<"Hello";
    }
};
class BaseDerived : public Base //parents
{
};
class ChildDerived : public BaseDerived //child
{
};


int main() {
    ChildDerived d;
    d.display();
    Dog dog;
    dog.run();
    dog.speak();
    Cat cat;
    cat.run();
    cat.speak();
    return 0;
}