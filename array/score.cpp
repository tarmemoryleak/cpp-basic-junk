#include<iostream>
using namespace std;
int main(){
    int total = 0;  
    int count = 0;
    int score[5]; //รับกล่อง array 5 คน 
    for(int i = 0; i < 5; i++){
        cout<<"enter score " <<endl;
        cin >> score[i]; //รับค่าคะแนน
        total = total + score[i]; 
        if (score[i] > 50){
            total = total + score[i];
            count = count + 1;
            cout<<"wow this guy high score! "<<endl; //แจ้งเตือนเมื่อเจอคนคะแนนมากกว่า 50

        }
    }
    cout<<"all score from 5 person " << total << endl; //เอา print ออกจาก loop
    for(int i = 0; i < 5; i++){
    cout<<"person score " << "score " << score[i] << endl;
    }
    
    return 0;
}
