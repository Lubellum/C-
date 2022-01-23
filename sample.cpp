#include <iostream>
using namespace std;

class NewClass{
    public:
        NewClass();
};

NewClass::NewClass(){
    cout << "オブジェクトを作るだけで発動\n";
}

int main (){
    NewClass obj;
    return 0;
}