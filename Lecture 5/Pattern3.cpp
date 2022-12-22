#include <iostream>
using namespace std;

/*
1
12
123
1234
*/

int main() {

  int n;
  cin >> n;

  int i = 1;

  while (i <= n) {
    int count = 1;
    int j = 1;

    while (j <= i) {
      cout << count;
      count = count + 1;
      j = j + 1;
    }

    cout << endl;

    i = i + 1;
  }
}
