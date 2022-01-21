#include <stdio.h>

struct {
    int year;
    char name[64];
    double weight;
    double height;
}Tarou, Hanako;

int main (void){
    struct Student Yamada;
    Tarou.year = 10;
    Hanako.year = 12;
    printf("Tarouの年齢：%d\n", Tarou.year);
    printf("Hanakoの年齢：%d\n", Hanako.year);
    return 0;
}