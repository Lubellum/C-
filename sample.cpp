#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int i, j;
    for(i = 1; i <= 9; i++){
        cout << i << "の段:";
        for(j = 1; j <= 9; j++){
            cout << setw(5) << i * j;
        }
        cout << "\n";
    }
    return 0;
}