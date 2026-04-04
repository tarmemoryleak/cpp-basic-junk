#include <iostream>
using namespace std;

int main() {
    double water;
    for (int i = 0; i < 5; i++){
      cout <<"what is the depth?" <<endl;
      cin >> water;
    if (water < 2){
      cout<<"nice"<<endl;
    } else {
      cout<<"its too depth"<<endl;
    }

    }
    return 0;
}
