#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
   int year, month, ly, last;
   printf("연도와 달를 입력하세요\n");
   scanf("%d %d", &year, &month);

   switch (month)
   {
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:
      last = 31;
      printf("%d 년 %d 월의 말일은 %d 일 입니다", year, month, last);
      break;
   case 4:
   case 6:
   case 9:
   case 11:
      last = 30;
      printf("%d년 %d월의 말일은 %d일 입니다", year, month, last);
      break;
   case 2:
      if (year % 4 == 0 && year % 100 != 0)
      {
         ly = 29;
         printf("%d 년 %d 월의 말일은 %d 일 입니다", year, month, ly);
         break;
      }
      else if (year % 400 == 0)
      {
         ly = 29;
         printf("%d 년 %d 월의 말일은 %d 일 입니다", year, month, ly);
         break;
      }
      else
      {
         ly = 28;
         printf("%d 년 %d 월의 말일은 %d 일 입니다", year, month, ly);
         break;
      }


   }
   return 0;
}