#include <stdio.h>

int shape, number;

int main() {
  printf("스페이드는 1, 다이아몬드는 2, 하트는 3, 클로버는 4를 입력하세요\n");
  scanf("%d", &shape);
  printf("원하는 카드의 숫자를 입력하세요\n");
  scanf("%d", &number);
  switch(shape) {
    case 1: printf("스페이드"); break;
    case 2: printf("다이아몬드"); break;
    case 3: printf("하트"); break;
    case 4: printf("클로버"); break;
     
  }
  switch(number) {
    case 11: printf("_JACK"); break;
    case 12: printf("_QUEEN"); break;
    case 13: printf("_KING"); break;
    default: printf("%d", number);
  }
  printf("\n");

  return 0;
}