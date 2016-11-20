#include<stdio.h>
int main(){
int a, b;
printf("Inserire il primo numero:");
scanf("%d", &a);
printf("Inserire il secondo numero:");
scanf("%d", &b);
if(a%b==0){
  printf("Il primo numero e' multiplo del secondo\n");
}
else {
  printf("Il primo non e' multiplo del secondo\n");
}
return 0;
}

