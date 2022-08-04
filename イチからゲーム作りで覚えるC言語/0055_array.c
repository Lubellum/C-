#include <stdio.h>

int main() {
  int level = 3;
  int maxHP[6] = {10, 15, 20, 26, 151, 157};
  char magicName[7] = "Check";
  char enemyName[10] = "鬼うさ";

  printf("ああああ：ステータス調査魔法「%s」を敵「%s」に使おう。\n", magicName, enemyName);
  printf("ふむふむ、%sはレベル%dで、最大HPは%dくらい。\n", enemyName, level, maxHP[level]);
  level++;
  printf("%sはレベル%dで、最大HPは%dくらい。\n", enemyName, level, maxHP[level]);
}