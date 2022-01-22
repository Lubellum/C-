#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        void show();
};

void Student::show(){
    cout << "番号：" << num << "\n";
}

int main (){
    Student Yamada, Hanako;
    Yamada.num = 10;
    Hanako.num = 12;
    Yamada.show();
    Hanako.show();
    return 0;
}