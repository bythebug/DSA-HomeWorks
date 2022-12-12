#include <iostream>
using namespace std;

int main() {

  int input;
  cin >> input;

  int startFrom = 2;

  while (startFrom < input) {
    if (startFrom % 2 == 0) {
      cout << "NOT PRIME " << startFrom << endl;
    } else {
      cout << "PRIME " << startFrom << endl;
    }
    startFrom = startFrom + 1;
  }
}
