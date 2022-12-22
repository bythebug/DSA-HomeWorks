#include <iostream>
using namespace std;

int main() {

  int arr[] = {1,2,3,4,5};
  int sizeofArray = 5;

  int start = 0;
  int last = sizeofArray - 1;

  int temp;
  
  while(start < last){
    
    temp = arr[start];
    arr[start] = arr[last];
    arr[last] = temp;
    
    start ++;
    last --;
  }

  for(int i = 0; i < sizeofArray; i++){
    cout << arr[i] << " ";
  }
  
  return 0;
}
