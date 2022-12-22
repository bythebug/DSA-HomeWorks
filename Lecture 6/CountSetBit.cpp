#include <iostream>
using namespace std;

int main() {

  int a, b;
  cin >> a;
  cin >> b;

  int countofA = 0;
  int countofB = 0;
  
  while(a){
    countofA += a&1;
    a >>= 1;
  }

  while(b){
    countofB += b&1;
    b >>= 1;
  }

  cout << "Answer :"<<countofA + countofB;

  return 0;
}

