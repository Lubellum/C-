#include <iostream>
using namespace std;

class NewClass{
    public:
        NewClass();
        ~NewClass();
};

NewClass::NewClass(){
    cout << "コンストラクタです\n";
}

NewClass::~NewClass(){
    cout << "デストラクタです\n";
}

int main (){
    NewClass obj;
    return 0;
}