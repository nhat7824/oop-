#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
    ifstream f1("input.txt", ios::in);
    char s[200];
    while (!f1.eof()) {
        f1.getline(s, 200);
        cout << s << endl;
    }
    f1.close();
    return 0;
}

