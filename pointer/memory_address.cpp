//หา memory address ในแรม
#include<iostream>
using namespace std;
int main (){
    int x = 100; 
    int* ptr = &x;
    cout << ptr << endl;   //address ใน memory
    cout << *ptr << endl;  //ค่าข้างใน
    cout << &x << endl;   //address ของ x
    cout << ptr << endl;  //address ที่ ptr เก็บไว้ 
}
