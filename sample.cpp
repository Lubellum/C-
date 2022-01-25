#include <iostream>
using namespace std;

class Student{
    public:
        static int grade;
};

int Student::grade = 6;

int main (){
    Student taraou;
    cout << taraou.grade << "\n";
    return 0;
 }