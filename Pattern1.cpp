#include <iostream>
using namespace std;

/* 
1234
1234
1234
1234
*/
int main() {

  int desiredRows;
  cin >> desiredRows;

  int currentRows = 1;

  while (currentRows <= desiredRows) {

    int currentColumn = 1;

    while (currentColumn <= desiredRows) {
      cout << currentColumn;
      currentColumn = currentColumn + 1;
    }

    cout << endl;

    currentRows = currentRows + 1;
  }
}
