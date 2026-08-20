// we can stimulate the do while loop using a while loop 

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream myFile("input.txt");
    if (!myFile) {
        cout << "unable to open file";
    }
    int n;
     myFile >> n;
// int i = 0;
//     do {
//         cout << i << " ";
//         i++;
//     } while (i < n);


    int i = 0;
    while (true) {
        cout << i << " ";
        i++;
        if (i < n) {
            break;
        }
    
    return 0;
}
