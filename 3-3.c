#include <stdio.h>

float number[] = {98.56f, 78.62f, 78.69f, 89.32f, 95.29f};
float add = 0;

int main()
{
    for (int i = 0; i < 5; i++) {
        printf("%f ", number[i]);
        add = add + number[i];
    }
    printf("\n총합은 %f 평균은 %f이다\n", add, add/5);

    return 0;
}