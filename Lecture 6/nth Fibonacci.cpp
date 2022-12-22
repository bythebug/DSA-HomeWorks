#include <iostream>
using namespace std;

int main() {

  int n = 10;

  int a=0, b=1, c, i;

  if(n == 0){
    a = 0;
  }

  for(int i = 2; i<=n; i++){
    c = a+b;
    a = b;
    b = c;
  }

  cout <<"nth Term: " << b;
  
  return 0;
}

