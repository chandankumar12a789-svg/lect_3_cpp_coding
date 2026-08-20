//for loop

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

//   int i = 0;
//   while (i < n) {
//         cout << i << " ";
//         i++;
//     }


     for(int i=0; i<n; i++){
         cout << i << " ";
     }
     cout << endl;
    //  cout << i << endl; // error since i is not defined outside the for loop

     int j = 0;
     for(; j<n; j++){
         cout << j << " ";
     }
     cout << endl;
     cout << j << endl; // j is defined outside the for loop so it can be used here


     for (int k=0; k<n;){
         cout << k << " ";
         k++;
     }
        cout << endl;


    // for ( ; ;) {
    //     cout << "*";  
    // }
    // cout << endl; // infinite loop since there is no condition to break the loop
    return 0;
}
