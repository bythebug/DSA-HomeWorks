#include <iostream>
using namespace std;

/* 
1 1 1 1 1 
2 2 2 2 2 
3 3 3 3 3 
4 4 4 4 4 
5 5 5 5 5 
*/

int main() {

  int desiredRows;
  cin >> desiredRows;

  int currentRows = 1;

  while (currentRows <= desiredRows) {

    int currentColumn = 1;

    while (currentColumn <= desiredRows) {
      cout << currentRows << " ";
      currentColumn = currentColumn + 1;
    }

    cout << endl;

    currentRows = currentRows + 1;
  }
}
