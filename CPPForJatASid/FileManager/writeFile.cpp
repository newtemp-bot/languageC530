#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream fs;
    fs.open("Task.txt",ios::app | ios::ate);
    fs << "pooja prajpati";
    fs.close();
    return 0;
}