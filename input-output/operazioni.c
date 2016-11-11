#include <stdio.h>
int main()
{
  int num1, num2, somma, differenza, prodotto, quoziente, modulo;
  printf("Inserire il primo numero: ");
  scanf("%d", &num1);
  
  printf("Inserire il secondo numero: ");
  scanf("%d", &num2);

  somma = num1 + num2;
  prodotto = num1 * num2;
  differenza = num1 - num2;
  quoziente = num1 / num2;
  modulo = num1 % num2;

  printf("La somma e' %d\n Il prodotto e' %d\n La differenza e' %d\n Il quoziente e' %d\n Infine il modulo e' %d", somma, prodotto, differenza, quoziente, modulo);
return 0;
}
