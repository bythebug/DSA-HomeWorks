#include <iostream>
using namespace std;

/*
A
BC
CDE
DEFG
*/

int main() {

  int n;
  cin >> n;
  
  int i = 1;
  
  while (i <= n) {
    int j = 1;
    char ch = 'A' + i + j - 2;  
    while (j <= i) {
      cout << ch;
      ch = ch + 1;
      j = j + 1;
    }

    cout << endl;

    i = i + 1;
  }
}
