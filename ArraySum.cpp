#include <iostream>
using namespace std;

int main() {

  // array sum

  int arr[] = {2,3,4,5,6};
  int sizeofArray = 5;

  int sum = 0;

  for (int i = 0; i < sizeofArray; i++){
    sum += arr[i];
  }

  cout << "Array Sum: "<< sum << endl;
  return 0;
}

