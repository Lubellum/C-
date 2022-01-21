#include <iostream>
using namespace std;

int main (){
    int num;
    cout << "数値を入力してください";
    cin >> num;
    if(num > 10)
        cout << "10より大きいです\n";
    if(num < 10)
        cout << "10より小さいです\n";
    if(num == 10)
        cout << "10と同じです\n";
    return 0;
}