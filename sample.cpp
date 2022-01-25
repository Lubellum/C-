#include <iostream>
using namespace std;

class Mother{
    public:
        int num1;
};

class Father{
    public:
        int num2;
};

class Child : public Mother, public Father{

};

int main (){
    Child obj;
    obj.num1 = 10;
    obj.num2 = 20;
    cout << obj.num1 << "\n";
    cout << obj.num2 << "\n";
    return 0;
 }