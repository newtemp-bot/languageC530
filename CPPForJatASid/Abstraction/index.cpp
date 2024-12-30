#include <iostream>
using namespace std;

class Bank
{
    private:
        int bal = 0;
        static int totalbal;
    public:
        void setBal(int bal)
        {
            this->bal=bal;
            totalbal+=bal;
        }
        int getBal()
        {
            return bal;
        }
        void disBal()
        {
            cout<<"We have total of = "<<totalbal;
        }
};
int Bank :: totalbal = 0;

int main() {
   
    Bank a,j;
    a.setBal(10000);
    j.setBal(15000);
    a.disBal();
    cout<<"Ashok = "<<a.getBal();
    cout<<"Jatan = "<<j.getBal();
    return 0;
}