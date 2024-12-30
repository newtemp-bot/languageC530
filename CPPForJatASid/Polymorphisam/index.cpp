#include <iostream>

using namespace std;

/* class Demo {
public:
    virtual void display() {
        cout << "Hello from Demo class!" << endl;
    }
};
class Child : public Demo {
public:
    void display() {
        cout << "Hello from Child class!" << endl;
    }
}; */

class Hello
{
public:
    int x = 0;
    Hello(int x)
    {
        this->x = x;
        this->hdis();
    }
    void hdis()
    {
        cout<<"hello";
    }
};



int main() {
    /* Child c;
    Demo* d;
    d = &c;
    d->display();
    Demo ds;
    ds.display(); */




    Hello* h = new Hello(60);
    h->hdis();
    cout<<h->x;
    return 0;
}