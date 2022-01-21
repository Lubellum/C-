#include <stdio.h>

struct Fruits{
    int apple;
    int orange;
    int banana;
};

int main (void){
    struct Fruits store1 = {100, 200, 300};
    struct Fruits store2 = {200, 400, 500};
    struct Fruits store3;
    store3 = store1;
    printf("りんごの金額：%d\n", store3.apple);
    printf("オレンジの金額：%d\n", store3.orange);
    printf("バナナの金額：%d\n", store3.banana);
    return 0;
}