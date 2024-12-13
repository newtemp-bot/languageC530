#include <iostream>
using namespace std;
class Demo
{
    public:
        int x=0;
        static int xy;
        Demo()
        {
            cout<<"hello Demo";
        }
        Demo(int x)
        {
            cout<<"hello Demo with x = "<<x;
        }
        Demo(int y,int x)
        {
            cout<<"hello Demo with x = "<<x<<" Y = "<<y;
        }
        ~Demo()
        {
            cout<<"Code Ended...";
        }
};
int Demo :: xy = 0;
int main()
{
    int x,y;
    cout<<"Enter Your n1 n2";
    scanf("%d %d",&x,&y);
    Demo d1,d2(x,y);
    /* d1.x=50;
    d1.xy=90;
    cout<<d2.x;
    cout<<d2.xy; */
}