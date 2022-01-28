#include <stdio.h>

#include <stdlib.h>



int main(int argc, char* argv[]){

  char ret;

  for(int idx=0; idx<10; idx++){

    printf("%d\n", idx);

  }

  //コンソールの表示内容をクリアする

  system("cls");

  printf("abc\n");

  scanf("%c", &ret);

}