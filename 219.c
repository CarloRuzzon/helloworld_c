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


if (a==b && b==c)
{
  printf("I tre numeri sono uguali\n");
}
if (a>c && c>b)
{  
  printf("Il numero maggiore e' %d\n", a);
  printf("Il numero minore e' %d\n", b);
}
if (a>b && b>c)
{
  printf("Il numero maggiore e' %d\n", a);
  printf("Il numero minore e' %d\n", c);
}
if (b>a && a>c)
{
  printf("Il numero maggiore e' %d\n", b);
  printf("Il numero minore e' %d\n", c);
}
if (c>a && a>b)
  printf("Il numero maggiore e' %d\n", c);
  printf("Il numero minore e' %d\n", b);
if(b>c && b>a)
{
  printf("Il numero maggiore e' %d\n", b);
  printf("Il numero minore e' %d\n", a);
}
else 
{
  printf("Il numero maggiore e' %d\n", c);
  printf("Il numero minore e' %d\n", a);
}
return 0;
}
