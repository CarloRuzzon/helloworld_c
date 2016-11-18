#include<stdio.h>
int main(){
  
int a, b, c, d, e, max, min;

printf("Inserire il 1 numero:");
scanf("%d", &a);
printf("Inserire il 2 numero:");
scanf("%d", &b);
printf("Inserire il 3 numero:");
scanf("%d", &c);
printf("Inserire il 4 numero:");
scanf("%d", &d);
printf("Inserire il 1 numero:");
scanf("%d", &e);
max=a;
if (a==b && b==c && c==d && d==e){
  printf("Inserire numeri diversi\n");
}
if (b>max){
   max=b;
}
if (c>max){
  max=c;
}
if (d>max){
  max=d;
}
if (e>max){
  max=e;
}
min=a;
if(b<min){
  min=b;
}
 if(c<min){
  min=c;
}
if (d<min){
  min=d;
}
if (e<min){
  min=e;
}
printf("Il numero minore e' %d\n", min);
printf("Il numero maggiore e' %d\n", max);
return 0;
}
