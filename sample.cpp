#include <iostream>
using namespace std;

void nibai(int x){
    cout << x * 2 << "\n";
}

int main (){
    int num;
    cout << "数値を入力してください\n";
    cin >> num;
    nibai(num);
    return 0;
}