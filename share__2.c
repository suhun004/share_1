#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_number[52];
int count;

void shuffle(int a); // a개의 수를 rand_number[]에 랜덤으로 중복없이 배열

char card[52][15] = {
    "SPADE_ACE",
    "SPADE_2",
    "SPADE_3",
    "SPADE_4",
    "SPADE_5",
    "SPADE_6",
    "SPADE_7",
    "SPADE_8",
    "SPADE_9",
    "SPADE_10",
    "SPADE_Jack",
    "SPADE_Queen",
    "SPADE_king",
    "CLOVER_ACE",
    "CLOVER_2",
    "CLOVER_3",
    "CLOVER_4",
    "CLOVER_5",
    "CLOVER_6",
    "CLOVER_7",
    "CLOVER_8",
    "CLOVER_9",
    "CLOVER_10",
    "CLOVER_Jack",
    "CLOVER_Queen",
    "CLOVER_king",
    "DIAMOND_ACE",
    "DIAMOND_2",
    "DIAMOND_3",
    "DIAMOND_4",
    "DIAMOND_5",
    "DIAMOND_6",
    "DIAMOND_7",
    "DIAMOND_8",
    "DIAMOND_9",
    "DIAMOND_10",
    "DIAMOND_Jack",
    "DIAMOND_Queen",
    "DIAMOND_king",
    "HEART_ACE",
    "HEART_2",
    "HEART_3",
    "HEART_4",
    "HEART_5",
    "HEART_6",
    "HEART_7",
    "HEART_8",
    "HEART_9",
    "HEART_10",
    "HEART_Jack",
    "HEART_Queen",
    "HEART_king"
};

int main() {
  srand(time(NULL));
  shuffle(52);
  printf("몇 개의 카드를 뽑을지 입력하세요\n");
  scanf("%d", &count);
  for (int k = 0; k < count; k++) {
      printf("%s\n", card[rand_number[k]]);
  }
  return 0;
}



void shuffle(int a) {
  for (int i = 0; i < a; i++) {
    rand_number[i] = rand() %a + 1;
    for (int j = 0; j < i; j++) {
      if (rand_number[i] == rand_number[j]) i--;
    }
  }
}

void mind_f() {
  printf("hello");
}