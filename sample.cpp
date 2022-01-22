#include <iostream>
#include "sample.h"
using namespace std;

void Student::show(){
    cout << "番号：" << num << "\n";
}

int main (){
    Student Tarou;
    Tarou.num = 24;
    Tarou.show();
    return 0;
}