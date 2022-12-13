#include <iostream>
using namespace std;

/*
D
CD
BCD
ABCD
*/

int main() {

  int n;
  cin >> n;
  
  int i = 1;
  
  while (i <= n) {
    
    int j = 1;
    while (j <= i) {
      
      // Breakdown. 
      // n - i + j + 'A' - 1;
      // total - row + col + startChar(A) - 1 = D
      // 4 - 1 + 1 + 'A' - 1 = D
      // 4 + 'A' - 1 = D
      // 'A' + 4 - 1 = D
      // 'E' - 1 = D
      // D = D
      char ch = n - i + j + 'A' - 1;
      cout << ch;
      ch = ch + 1;
      j = j + 1;
    }

    cout << endl;

    i = i + 1;
  }
}
