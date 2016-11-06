/* somma.c */

/* Somma di due interi */

#include <stdio.h>

int main()
{
  int num1;   /* variabili di input */
  int num2;
  int somma;  /* variabile di output */
  
  printf("Inserisci il primo numero: ");
  scanf("%d", &num1);
  
  printf("Inserisci il secondo numero: ");
  scanf("%d", &num2);
  
  somma = num1 + num2;
  
  printf("%d + %d = %d\n", num1, num2, somma);
  
  return 0;
}
