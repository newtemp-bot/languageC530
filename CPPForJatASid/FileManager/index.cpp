#include <iostream>
#include <fstream>
using namespace std;
int main() {
    string str;
    ifstream fs;
    fs.open("Demo.txt");
    while (getline(fs,str))
    {
        cout<<str<<"\n";
    }
    fs.close();
    return 0;
}