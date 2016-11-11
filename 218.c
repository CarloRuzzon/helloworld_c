#include<stdio.h>

int main()
{
int num1, num2;
printf("Inserire il 1 numero: ");
scanf("%d", &num1);
printf("Inserire il 2 numero: ");
scanf("%d", &num2);
if (num1>num2)
{
  printf("%d is larger\n", num1);
}
if (num2>num1)
{
  printf("%d is larger\n", num2);
}
else 
{
  printf("The numbers are equal\n");
}
return 0;
}
