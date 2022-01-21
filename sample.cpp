#include <stdio.h>

int main (){
    int apple = 10;
    int *p;
    p = &apple;
    printf("%d\n", *p);
    printf("%p", p);
    return 0;
}