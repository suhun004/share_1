#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sum, MAX = 52;
int state, shape, number, score, card_score, shape_print;
int my_card1, my_card2, my_card3, my_card4;
int my_card[8];
int dealer_card1, dealer_card2, dealer_card3, dealer_card4;
int dealer_card[8];
int i = 1;
int j = 1;
int k = 1;


void function1() {
    for (int i = 0; i <= 52; i++) {
        for (int j = i +1; j <= MAX; j++) {
            for (int k = j +1; j <= MAX; k++) {
                if (k % 13 != 0) {
                    sum = 0;
                    
                }
            }
        }
    }
}

char card_shape[4][10] = {
    "SPADE",
    "CLOVER",
    "DIAMOND",
    "HEART"
};

char card_number[13][10] = {
    "_ACE",
    "_2",
    "_3",
    "_4",
    "_5",
    "_6",
    "_7",
    "_8",
    "_9",
    "_10",
    "_Jack",
    "_Queen",
    "_king"
};

void my_game();
void pick_card();
void dealer_game();



int main() 
{
    srand(time(NULL));
    my_game();
    pick_card();
    dealer_card[0] = number + shape + 1;
    
    printf("%d %d %d %d", my_card[0], my_card[1], my_card[2], my_card[3]);

    return 0;
}


void my_game() {
    pick_card();
    my_card[0] = number + shape + 1;
    score = card_score;

    do {
        do {
            pick_card();
            my_card[i] = number + shape + 1;
        } while (my_card[0] == my_card[i]);
        i++;

        score = score + card_score;
        if (score <= 21) {
            printf("점수의 총합 = %d\n", score);
            printf("계속 하려면 1, 그만하려면 다른 수를 누르세요\n");
            scanf("%d", &state);
        }
        else {
            state = 2;
            printf("당신의 점수는 %d점으로 21점을 넘었습니다\n게임이 종료 되었습니다\n", score);
        }
        
    
    } while (state == 1);

    if (score <= 21) {
        printf("게임이 종료 되었습니다 당신의 점수는 %d점 입니다\n", score);
    }
    printf("당신의 카드수 = %d\n", i);
}

void pick_card() {
    number = rand() % 13; //number에 0부터 12까지 랜덤으로 수를 입력
    shape_print = rand() %4; //0부터 3까지 랜덤 입력
    shape = (shape_print)*13;    //shape_print가 0이면 0(스페이드), 1이면 13(클로버), 2이면 26(다이아몬드), 3이면 39(하트)

    printf("%s%s\n", card_shape[shape_print], card_number[number]);
    if (number <= 9) {
        card_score = number +1;
    }
    else {
        card_score = 10;
    }
}

void dealer_game() {
    pick_card();
    do {
        dealer_card[0] = number + shape +1;
    } while (my_card[0] != dealer_card[0]);
   
}