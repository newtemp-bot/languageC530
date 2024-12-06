#include <iostream>
#include <istream>
#include <sstream>
#include <string>
 
using namespace std;
int main()
{
    int a = 20;
    //printf("Hello World");
    //scanf("%d",&a);
    istringstream str("       Test      hello         nice"); 
    string line;
    getline(str>>ws,line);
    cout<<line;
    cin>>a;
    cout<<"\n\nhello"<<endl<<"world";
    cout<<a;
    cerr<<"\n\nErr - 2025 :: Something Wrong...\n\n";
    cout<<"End Code.";
    return 0;
}