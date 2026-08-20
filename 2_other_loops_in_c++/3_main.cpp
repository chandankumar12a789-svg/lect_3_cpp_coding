// do while loop


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
    int i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i < n);
    cout << endl; 
    
    //


    int j = n;
    do {
        cout << j << " ";
        j++;
    } while (j < n);
    cout << endl; //unlike other loop the body of the do while loop is executed at least once even if the condition is false
    return 0; 
}
