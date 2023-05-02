#include <stdio.h>

int number[5];

int main()
{
    printf("숫자 4개를 입력하세요\n");
    scanf("%d %d %d %d", &number[0], &number[1], &number[2], &number[3]);
    number[4] = 0;
    for (int i = 0; i < 4; i++) {
        printf("%d번째 숫자는 %d\n", i + 1, number[i]);
        number[4] = number[4] + number[i];
    }
    printf("입력한 숫자의 합은 %d\n", number[4]);
    

    return 0;
}