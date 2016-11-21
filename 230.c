#include<stdio.h>
int main(){
int num, val1, val2, val3, val4, val5;
printf("Inserire un numero di 5 cifre: ");
scanf("%d", &num);

val5=num%10;
num/=10;
val4=num%10;
num/=10;
val3=num%10;
num/=10;
val2=num%10;
num/=10;
val1=num%10;

printf("%d   %d   %d   %d   %d\n", val1, val2, val3, val4, val5);

return 0;
}
