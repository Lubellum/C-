#include <stdio.h>

int main (void){
  char playerName[12];
  printf("プレイヤーの名前を入力して下さい。\n");
  printf("半角で11文字、全角で5文字までです。\n");
  printf("プレイヤーの名前：");

  // キーボードからの入力を求める
  scanf("%11s", playerName);

  // プレイヤーのステータスを表示
  printf("+-----[ステータス]------+\n");
  printf("|%10s : %-11s|\n", "名前", playerName);
  printf("+----------------------+\n");

  char player[12];
  scanf_s("%s", player);
}