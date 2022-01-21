#include <iostream>
using namespace std;

void keisan(int a, int b){
    int goukei;
    goukei = (300*a) + (200*b);
    cout << "合計金額は" << goukei << "円です\n";
}

int main (){
    int apple, orange;
    cout << "りんごの個数は？";
    cin >> apple;
    cout << "オレンジの個数は？";
    cin >> orange;
    keisan(apple, orange);
    return 0;
}