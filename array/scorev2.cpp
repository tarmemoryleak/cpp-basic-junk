#include<iostream>
using namespace std;

int main(){
    int score[5];
    float total = 0;
    for(int i = 0; i < 5; i++){
        cout << "Enter score " << i+1 << ": ";
        cin >> score[i];

    }
    for(int i = 0; i < 5; i++){
        if (score[i] < 50) {
            score[i] = 0;
            cout << "Person " << i+1 << ": low score reset to 0" << endl;
        }
        else if (score[i] >= 80){
            score[i] = score[i] + 10;
            cout << "Person " << i+1 << ": high score +10 bonus" << endl; 
        }
        
        total = total + score[i];
    }
    cout << "TOTAL SCORE " << total << endl;
    cout << "TOTAL " << total / 5.0 << endl;
    for(int i = 0; i < 5; i++){
    cout<<"person " << i+1 << "score " << score[i] << endl;
    }
    return 0;
    
}
