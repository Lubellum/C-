#include <iostream>
using namespace std;

class Student{
    public:
        int num;
};

// void show(Student x){
//     cout << x.num << "\n";
// }

int main (){
    Student Tanaka;
    Tanaka.num = 10;
    Student *p;
    p = &Tanaka;
    cout << (*p).num << "\n";
    return 0;
}