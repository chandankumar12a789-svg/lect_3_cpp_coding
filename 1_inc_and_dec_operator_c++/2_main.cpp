#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream myFile("input.txt");
    if (!myFile) {
        cout << "unable to open file";
    }
    int a=0;
    int b =10;
    if (a >0 and a++) {
        a++;
    } else {
        b++;
    }
    cout << a << " " << b << endl;


int x = 0;
int y =10;
if (y > 0 or y++) {
    x++;
}
 else {
    y++;
}
    cout << x << " " << y << endl;


int p = 0;
int q = 11;
if (q < 0 or p++) {
    p++;
} else {
    q++;
}
    cout << p << " " << q << endl;


int m = 0;
int n = 10;
if (n < 0 or ++m) {
    m++;
} else {
    n++;
}
    cout << m << " " << n << endl;
    return 0;
}
