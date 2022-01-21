#include <iostream>
using namespace std;

int main (){
    int num;
    cout << "番号を入力してください";
    cin >> num;
    switch (num){
        case 1:
            cout << "ハリー\n";
            break;
        case 2:
            cout << "ロン\n";
            break;
        case 3:
            cout << "ハーマイオニー\n";
            break;
        default:
            cout << "マルフォイ\n";
            break;
    }
    return 0;
}