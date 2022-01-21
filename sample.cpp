#include <iostream>
using namespace std;

int main (){
    int num;
    int array[num];
    int i;
    cout << "要素数はいくつですか？";
    cin >> num;
    for(i = 0; i < num; i++){
        cin >> array[i];
    }
    for(i = 0; i < num; i++){
        cout << i + 1 << "番目：" << array[i] << "\n";
    }
    return 0 ;
}