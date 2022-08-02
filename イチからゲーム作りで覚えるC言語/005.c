#include <stdio.h>

int main(void) {
  char keytype = 'b';
  char *player = "ああああ";
  char *thief = "盗賊";
  short level = 5;
  float breakKeyPer = 3.2F;
  double biorhythm = 5.123L;

  printf("%s: タイプ%cの鍵って売っていますか？\n", player, keytype);
  printf("%s: 売ってない。ロックピックならあるぜ？\n", thief);
  printf("%s: 俺の解錠スキルはどれぐらいだったっけ...\n\n", player);
  printf("+------[ステータス]------+\n");
  printf("|%10s : %-11s|\n", "名前", player);
  printf("|%10s : %03d |\n", "レベル", level);
  printf("|%10s : %8.1f %% |\n", "解錠確率", breakKeyPer);
  printf("|%10s : %+8.31f %% |\n", "体調", biorhythm);
  printf("+------------------------+\n");
}