#include <iostream>
using namespace std;

int findMax(int arr[], int size){
    int max_val = arr[0]; // เริ่มต้น max_val เป็นค่าของ element แรกใน array
    for(int i = 1; i < size; i++){
        if (arr[i] > max_val){ // ถ้าเจอค่าที่มากกว่า max_val
            max_val = arr[i]; // อัพเดต max_val เป็นค่านั้น
        }
    }
    return max_val; 
}

int main() {
    int daily_calories[7]; // เก็บค่าอาหารที่กินไปในแต่ละวัน
    int total_calories = 0; // ตัวแปรเก็บผลรวมของอาหารที่กินไปใน 7 วัน
    int max_calories = 0; // กำหนดค่าเกณฑ์อาหารที่กินไปในแต่ละวัน
    const int day = 7; // hardcode ว่ามี 7 วัน
    for(int i = 0; i < day; i++){
        cout << "Enter calories for day " << i+1 << ": ";
        cin >> daily_calories[i]; // รับค่าอาหารที่กินไปในแต่ละวันจากคนพิมพ์ เก็บไว้ใน array daily_calories
    }
    for(int i = 0; i < day; i++){
        if (daily_calories[i] >= 3000) {
            cout << "Day" << i+1 << ": High calorie intake!" << endl;
        }
        total_calories += daily_calories[i];
    }
    max_calories = findMax(daily_calories, day); // เรียกใช้ฟังก์ชัน findMax เพื่อหาค่าอาหารที่กินไปในแต่ละวันที่มากที่สุด
    
    cout << "Maximum calories in a day: " << max_calories << endl;
    cout << "Total calories this week: " << total_calories << endl;
    cout << "Calories average: " << (double)total_calories/day << endl;

    return 0;
}

