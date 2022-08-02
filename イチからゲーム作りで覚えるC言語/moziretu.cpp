#include <stdio.h>

int main(void) {
  char player[] = "ああああ";
  char *lunchA = "小麦スープ";
  char waiterName[6] = {'O', 'y', 'a', 'z', 'i', '\0'};

  printf("%s: お金がないので今回はAランチにします\n", player);
  printf("%s: ほらよっ、Aランチの「%s」だぜ!\n", waiterName, lunchA);
  printf("%s: (うわぁ、まずそう...)\n", player);
}