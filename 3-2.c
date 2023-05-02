#include <stdio.h>

int data[] = {3, 21, 35, 57, 24, 82, 8};


int main()
{
    for (int i = 0; i < 7; i++) {
        data[i] = data[i] + 10;
        printf("%d ", data[i]);
    }

    return 0;
}