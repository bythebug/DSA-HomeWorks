//Lecture 7
#include <iostream>
using namespace std;

int main() {

  int amount;
  cin >> amount;

  int n100 = 0, n20 = 0, n1 = 0;

  switch(1){
    case 1: 
      n100 = amount / 100;
      amount = amount - n100 * 100; 
    case 2: 
      n20 = amount / 20;
      amount = amount - n20 * 20;
    case 3: 
      n1 = amount / 1;
      amount = amount - n1 * 1;
    }

  // if (amount >= 100) {
  //   n100 = amount / 100;
  //   amount = amount - n100 * 100;
  // }

  // if (amount >= 20) {
  //   n20 = amount / 20;
  //   amount = amount - n20 * 20;
  // }

  // if (amount >= 1) {
  //   n1 = amount / 1;
  //   amount = amount - n1 * 1;
  // }

  cout << n100 << endl;
  cout << n20 << endl;
  cout << n1 << endl;

  return 0;
}

