#include <iostream>
using namespace std;

int keisan(int a){
    int goukei = a * 200;
    return goukei;
}

int main (){
    int apple;
    cout << "りんごの個数は？";
    cin >> apple;
    int judge = keisan(apple);
    if(judge > 3000)
        cout << "予算オーバーです\n";
    else
        cout << "購入出来ます\n";
    return 0;
}