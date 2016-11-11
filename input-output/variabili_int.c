/* variabili_int.c */

/* uso delle variabili intere */

#include <stdio.h>

int main()
{
  /* in C prima di poter usare una variabile
   * bisogna dichiararla specificandone il tipo
   */
  int age = 25;

  /* per la stampa di variabili bisogna
   * utilizzare la "specifica di stampa".
   * Nel caso di variabili intere %d
   */
  printf("Ho %d anni\n", age);

  return 0;
}
