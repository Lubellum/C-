#include <iostream>
using namespace std;

int main (){
    int num;
    cout << "数値を入力してください";
    cin >> num;
    if(num >= 5 && num <= 10)
        cout << "5と10の間にあります\n";
    return 0;
}