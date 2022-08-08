#include <stdio.h>
#include <stdbool.h>

int main() {
  bool HpNoneFlag = true;            // 体力無しフラグ
  bool RecoveryAgentsNoFlag = false; // 回復薬なしフラグ
  bool timeoutFlag = false;          // 時間切れフラグ

  bool gameOverFlag = HpNoneFlag || timeoutFlag;
  bool deathFlag = HpNoneFlag && RecoveryAgentsNoFlag;
  bool seizonFlag = !deathFlag;

  printf("体力無しフラグ:%d\n", HpNoneFlag);
  printf("回復薬無しフラグ:%d\n", RecoveryAgentsNoFlag);
  printf("時間切れフラグ:%d\n", timeoutFlag);
  printf("ゲームオーバーフラグ:%d\n", gameOverFlag);
  printf("死亡フラグ:%d\n", deathFlag);
  printf("生存フラグ:%d\n", seizonFlag);

  bool a = 150;
  printf("bool型に整数150を代入した結果:%d\n", a);

}