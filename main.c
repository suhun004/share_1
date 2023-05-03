#include <stdio.h>

int card[4][13];
int shape, number;
int s, n;

int main()
{
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 13; j++) {
      card[i][j] = i * 13 + j;
    } 
  }
  printf("모양을 입력하세요(스페이드는 0, 다이아몬드는 1, 하트는 2, 클로버는 3)\n");
  scanf("%d", &shape);
  printf("카드의 숫자를 입력하세요\n");
  scanf("%d", &number);

  s = (card[shape][number] + 1) / 13;
  n = (card[shape][number] + 1) % 13 - 1;

  switch(s) {
    case 0:
      printf("SPADE");
      break;
    case 1:
      printf("DIAMOND");
      break;
    case 2:
      printf("HEART");
      break;
    case 3:
      printf("CLOVER");
      break;
  }
  switch(n) {
    case 1:
      printf("_A");
      break;
    case 11:
      printf("_j");
      break;
    case 12:
      printf("_Q");
      break;
    case 13:
      printf("_K");
      break;
    default:
      printf("_%d", number);
  }
}