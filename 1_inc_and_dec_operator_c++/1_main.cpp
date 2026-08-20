#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream myFile("input.txt");
    if (!myFile) {
        cout << "unable to open file";
    }
    int x = 10;
    ++x;
    cout << " x = " << x << endl;
    int y;
    --y;
    cout << " y = " << y << endl;
    int a = 10;
    cout << a++ << endl;
    cout << " a = " << a << endl;
    int b = 20;
    cout << ++b << endl;
    cout << " b = " << b << endl;

    
    return 0;
}
