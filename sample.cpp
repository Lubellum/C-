#include <iostream>
using namespace std;

class Student{
    public:
        int num;
};

int main (){
    Student Tarou, *p;
    p = &Tarou;
    (*p).num = 10;
    cout << (*p).num << "\n";
    return 0;
}