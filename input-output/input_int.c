/* input_int.c */

/* input di variabili intere */

#include <stdio.h>

int main()
{
  int age;

  /* input di una variabile intera */
  printf("Quanti anni hai? ");
  scanf("%d", &age);    /* attenzione alla & */

  printf("Dici di avere %d anni\n", age);

  return 0;
}
