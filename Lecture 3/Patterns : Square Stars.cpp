#include <iostream>
using namespace std;

// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

int main() {

  int desiredRows;
  cin >> desiredRows;

  int currentRows = 0;

  while (currentRows < desiredRows) {

    int currentColumn = 0;

    while (currentColumn < desiredRows) {
      cout << "* ";
      currentColumn = currentColumn + 1;
    }

    cout << endl;

    currentRows = currentRows + 1;
  }
}
