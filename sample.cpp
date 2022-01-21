#include <stdio.h>

struct Fruits{
    int apple;
    int orange;
    int banana;
};

void price (struct Fruits store1);

int main (void){
    struct Fruits store1 = {100, 200, 300};
    price(store1);
    return 0;
}

void price (struct Fruits store1){
    printf("りんごの金額：%d\n", store1.apple);
    printf("オレンジの金額：%d\n", store1.orange);
    printf("バナナの金額：%d\n", store1.banana);
}