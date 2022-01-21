#include <stdio.h>

struct Student{
    int year;
    char name[64];
    double weight;
    double height;
};

int main (void){
    struct Student Tarou;
    Tarou.year = 10;
    printf("%d\n", Tarou.year);
    return 0;
}