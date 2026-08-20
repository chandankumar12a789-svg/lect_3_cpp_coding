// input: n = 10
//output:
// 1 10
// 2 9
// 3 8
// 4 7
// 5 6
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
  for (int i = 1; i <= n/2; i++) {
    cout << i << " " << n - i + 1 << endl;
  }
  cout << endl;
  
//or

for(int i = 1, j = n; i < j; i++, j--) {
    cout << i << " " << j << endl;
}
  
    return 0;
}
