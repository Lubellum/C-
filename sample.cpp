#include <iostream>
using namespace std;

int main (){
    int num;
    cout << "数値を入力してください";
    cin >> num;
    if(num == 10)
        cout << "10と同じです\n";
    if(num != 10)
        cout << "10と同じっっではありません\n";
    return 0;
}