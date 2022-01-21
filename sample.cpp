#include <iostream>
using namespace std;

int main (){
    int num;
    cout << "数値を入力してください";
    cin >> num;
    if(num == 10){
        cout << "１０と同じです\n";
        cout << "正解です\n";
    }
    return 0;
}