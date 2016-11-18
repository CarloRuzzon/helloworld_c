#include <stdio.h>
int main()
{
int a, b, c, somma, prodotto, max, min;
float media;
printf("Inserire il primo numero: ");
scanf("%d", &a);
printf("Inserire il secondo numero: ");
scanf("%d", &b);
printf("Inserire il terzo numero: ");
scanf("%d", &c);
somma = a + b + c;
media = (a+ b + c) / 3.0;
prodotto = a * b * c;

printf("La somma e' %d\n", somma);
printf("La media e' %f\n", media);
printf("Il prodotto e' %d\n", prodotto);

max=a;
if (a==b && b==c)
{
  printf("I tre numeri sono uguali\n");
}
if (b>max)
{
  max=b;
}
if (c>max)
{
  max=c;
}

min = a;

if (b<min)
{
  min=b;
}
if (c<b)
{
  min=c;
}
printf("%d e' il maggiore\n", max);
printf("%d e' il minore\n", min);
return 0;
}
