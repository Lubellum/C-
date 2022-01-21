#include <iostream>
using namespace std;

int main (){
    int num;
    cout << "数値を入力してください";
    cin >> num;
    if(num == 10)
        cout << "10と同じです\n";
    else
        cout << "10ではありません\n";
    return 0;
}