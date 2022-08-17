#include <stdio.h>

int main() {
  int HP = 5;
  int maxHP = 9;

  printf("プレイヤーの体力は%d / %dで", HP, maxHP);

  if(HP == maxHP) printf("元気いっぱい！\n");
  else if(0 < HP   &&   HP < maxHP / 2) printf("危険です！\n");
  else if(HP == 0) printf("気絶しています..\n");
  else printf("バグってます！？");

  if(HP == 0) printf("あなたは動けません！");
}