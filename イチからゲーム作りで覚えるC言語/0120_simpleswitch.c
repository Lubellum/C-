#include <stdio.h>
int main() {
 int input = 0;
 printf("妖精：よくこの洞窟の底までたどり着きました。\n");
 printf("妖精：ほうびに大根かニンジンどちらかをさずけましょう。\n");
 printf("システム：入力してください。1:大根 2:ニンジン \n");
 printf("入力：");
 scanf("%d", &input);
 switch (input) {
 case 1:
   printf("妖精：大根ね。引っこ抜いてくるね。\n");
   break;
 case 2:
   printf("妖精：ニンジンね。引っこ抜いてくるね。\n");
   break;
 default:
   printf("妖精：それ以外あげるものはないです。\n");
 }
}