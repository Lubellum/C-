#include <iostream>
using namespace std;

class Human{
    public:
        void show();
};

void Human::show(){
    cout << "共通の基本クラス\n";
}

class Father : public virtual Human{

};

class Mother : public virtual Human{

};

class Child : public Mother, public Father{

};

int main (){
    Child obj;
    obj.show();
    return 0;
 }