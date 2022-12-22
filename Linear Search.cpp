#include <iostream>
using namespace std;

int main() {

  int arr[] = {2,3,4,5,6};
  int sizeofArray = 5;
  int key = 0;
  bool found = 0;

  for (int i = 0; i < sizeofArray; i++){
    if(arr[i] == key){
      found = 1;
    }
  }

  if(found){
  cout << "Element is FOUND:" << endl;  
  }
  else{
  cout << "Element is NOT FOUND" << endl;    
  }
  
  return 0;
}
