#include <iostream>
using namespace std;

void printArray(int* ptr, int size){
  for(int i = 0; i < size; i++){
    // อ่านที่ละ index *(ptr + i)
    cout << "Element:"<< i << "Address:" << (ptr + i ) << "Value:" << *(ptr + i) << endl;
  }
}

int main(){
  int tar [] = {90, 70, 86, 93};
  int size = 4; 
  // ส่งชื่อ array
  printArray(tar, size);
  return 0;
}
