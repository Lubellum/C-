#include <iostream>
using namespace std;

class NewClass{
    public:
        void hello();
        void hello(string name);
};

void NewClass::hello(){
    cout << "こんにちは\n";
}

void NewClass::hello(string name){
    cout << name << "さんこんにちは\n";
}

int main (){
    NewClass obj;
    obj.hello();
    return 0;
 }