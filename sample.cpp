#include <stdio.h>

typedef struct{
    int apple;
    int orange;
    int banana;
}Fruits;

int main (void){
    Fruits store;
    store.apple = 100;
    printf("リンゴの金額：%d円", store.apple);  
    return 0;
}