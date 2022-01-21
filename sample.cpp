#include <iostream>
using namespace std;

int main (){
    int year;
    cout << "年齢を入力してください";
    cin >> year;
    if(year <= 3)
        cout << "無料です\n";
    else if(year <= 20)
        cout << "1000円です\n";
    else
        cout << "2000円です\n";
    return 0;
}