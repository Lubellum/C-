#include <iostream>
using namespace std;

class OldClass{
    public:
        OldClass( );
};

OldClass::OldClass(){
    cout << "基本クラスのコンストラクタ\n"; 
}

class NewClass : public OldClass{
    public:
        NewClass();
};

NewClass::NewClass(){
    cout << "派生クラスのコンストラクタ\n";
}

int main (){
    NewClass obj;
    return 0;
 }