#include <stdio.h>
int main()
{
 int x; //переменная для хранения оценки
 printf("введите свою оценку: ");
 scanf("%d", &x);
 
  switch (x) {
  case 5: printf("excellent"); break;
  case 4: printf("good");
  case 3: printf("norm"); break;
  case 2:
  case 1: printf("bad"); break;
  default: printf("wrong data");
  }



 return 0;
}