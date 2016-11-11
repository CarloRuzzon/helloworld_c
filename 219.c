#include <stdio.h>
int main()
{
int a, b, c, somma, prodotto;
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


if (a>b && a>c)
{
  printf("Il maggiore e' %d\n", a);
}
if (b>c && b>a)
{
  printf("Il maggiore e' %d\n", b);
}
if (c>a && c>b)
{
  printf("Il maggiore e' %d\n", c);
}
if (a<b && a<c) 
{
   printf("Il minore e' %d\n", a);
}
if (b<a && b<c)
{
  printf("Il numero minore e' %d\n", b);
}
if (c<a && c<b)
{
  printf("Il numero minore e' %d\n", c);
}
else
{
  printf("I numeri sono uguali\n");
}
return 0;
}
