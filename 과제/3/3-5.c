#include <stdio.h>

int shape, number;

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

int main()
{
    printf("스페이드는 0, 클로버는 1, 다이아몬드는 2, 하트는 3을 입력하세요\n");
    scanf("%d", &shape);
    printf("카드의 숫자를 입력하고 J는 11, Q는 12, K는 13으로 입력하세요\n");
    scanf("%d", &number);
    number--;
    printf("%s\n", card[shape*13+number]);

    return 0;
}