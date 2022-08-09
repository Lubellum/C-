#include <stdio.h>

int main(void) {
 int muzukasisa = 4;
 char *muzukasisa_mozi;

 if (muzukasisa == 1) {
    muzukasisa_mozi = "EASY";
 }
 else if (muzukasisa == 2){
    muzukasisa_mozi = "NORMAL";
 }
 else if (muzukasisa == 3){
    muzukasisa_mozi = "HARD";
 }
 else {
    muzukasisa_mozi = "VERY HARD";
 }

 printf("難易度で%sが選択されています。\n", muzukasisa_mozi);
}