// โจทย์: จงเขียนโปรแกรม C++ เพื่อคำนวณว่าอาหารที่กินไปทั้งหมดเท่าไหร่ใน 7 วัน และคำนวณค่าเฉลี่ยของอาหารที่กินไปในแต่ละวัน ฝึกเขียนเองเล่นๆ
#include <iostream>

int main(){
    using namespace std;
    int daily_calories[7]; // เก็บค่าอาหารที่กินไปในแต่ละวัน
    int total_calories = 0; // ตัวแปรเก็บผลรวมของอาหารที่กินไปใน 7 วัน
    int max_calories = 0;
    const int day = 7; // hardcode ว่ามี 7 วัน
    for(int i = 0; i < day; i++){
        cout << "Enter calories for day " << i+1 << ": ";
        cin >> daily_calories[i]; // รับค่าอาหารที่กินไปในแต่ละวันจากคนพิมพ์ เก็บไว้ใน array daily_calories
    }
    for(int i = 0; i < day; i++){
        if (daily_calories[i] >= 3000){
            cout << "Day" << i+1 << ": High calorie intake!"<<endl;
        }
        // ถ้าอาหารที่กินไปมากกว่าให้เป็น max_calories ทันที
        if (daily_calories[i] > max_calories){
            max_calories = daily_calories[i];
        }
        total_calories += daily_calories[i];
    }
    cout << "Maximum calories in a day" << max_calories << endl;
    cout << "Total calories this week: " << total_calories << endl;
    cout << "calories average" << (double)total_calories/day << endl;

    return 0;
}

