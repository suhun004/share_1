#include <iostream>
#include <stdio.h>
#define MAX 5

using namespace std;

int fun(int, int, int);

int *nump;
int arr[5] = {0, };

int main() {
  int num = 0;
  for (int i = 0; i < MAX; i++) {
    
  }

  
  for (int i = 0; i < MAX; i++) {
    if (i == 0) {
      nump = &num;
    }
    else {
      nump += i;
    }
  }
  if (num == NULL) {
    cout
    << "fail" << endl;
  }
  else {
    cout
    << "success" << endl;
  }

  return 0;
}

int fun1(int a, int b, int c) {
  if (a + b == c) {
    return 0;
  }
  return 1;
}