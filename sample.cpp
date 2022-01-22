#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        int year;
        void show();
};

void Student::show(){
    cout << "番号：" << num << "\n";
    cout << "年齢：" << year <<"\n";
}

int main (){
    Student Tarou;
    Tarou.num = 10;
    Tarou.year = 12;
    Tarou.show();
    return 0;
}