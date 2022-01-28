#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <unistd.h>

int main (void){
    int Player_Choice = 0;
    int Enemy_Choice;
    bool End = true;

    while (End == true){

        srand((unsigned)time(NULL));
        system("reset");

        printf("出したい数字を入力してください\n"
        "1 => グー\n"
        "2 => チョキ\n"
        "3 => パー\n"
        "4 => 終了\n");

        scanf("%d", &Player_Choice);

        rewind(stdin);

        Enemy_Choice = rand() %3 + 1;

        switch(Player_Choice){
          case 1:
            if(Enemy_Choice == 1){
              printf("Enemyはグーを出した\n");
              printf("あいこでした\n");
            }
            else if (Enemy_Choice == 2){
              printf("Enemyはチョキを出した\n");
              printf("勝ちました\n");
            }
            else {
              printf("Enemyはパーを出した\n");
              printf("負けました\n");
            }
            break;

          case 2:
            if(Enemy_Choice == 1){
              printf("Enemyはグーを出した\n");
              printf("負けました\n");
            }
            else if (Enemy_Choice == 2){
              printf("Enemyはチョキを出した\n");
              printf("あいこでした\n");
            }
            else {
              printf("Enemyはパーを出した\n");
              printf("勝ちました\n");
            }
            break;

          case 3:
            if(Enemy_Choice == 1){
              printf("Enemyはグーを出した\n");
              printf("勝ちました\n");
            }
            else if (Enemy_Choice == 2){
              printf("Enemyはチョキを出した\n");
              printf("負けました\n");
            }
            else {
              printf("Enemyはパーを出した\n");
              printf("あいこでした\n");
            }
            break;

          case 4:
            End = false;
            break;
        }
        if(Player_Choice != 4){
          sleep(2);
        }
    }
}