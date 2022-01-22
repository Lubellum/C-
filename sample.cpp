#include <iostream>
using namespace std;

struct Student{
    int year;
    int num;
};

int main (){
    struct Student Tarou;
    Tarou.year = 10;
    cout << Tarou.year << "\n";
    return 0;
}