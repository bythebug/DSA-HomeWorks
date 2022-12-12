#include <iostream>
using namespace std;

int main() {

  int tableUpto;
  cin >> tableUpto;

  double startTable = 32;

  while (startTable - 32 < tableUpto) {

    // Formula: (32°F − 32) × 5/9 = 0°C
    cout << startTable << "F: " << (startTable - 32) * 5 / 9 << " C" << endl;

    startTable = startTable + 1;
  }
}
