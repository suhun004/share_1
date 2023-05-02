#include <stdio.h>

int number[4][4] = {
    {78, 48, 78, 98}, 
    {99, 92, 83, 29}, 
    {29, 64, 83, 89},
    {34, 78, 92, 56}
};


int number_a[4] = {0,};
int number_b[4] = {0,};
int add = 0;

int main()
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            number_a[i] = number_a[i] + number[i][j];
            number_b[i] = number_b[i] + number[j][i];

        }
        printf("%d번째 줄의 합은 %d, %d번째 열의 합은 %d이다\n", i + 1, number_a[i], i + 1, number_b[i]);
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            add = add + number[i][j];
            
        }
    }
    printf("모든 수의 합은 %d이다\n", add);

    return 0;
}