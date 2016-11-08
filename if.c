/* if.c */

/* Esecuzione condizionale */

#include <stdio.h>

int main()
{
  int x = 3;  /* coordinate di un punto */
  int y = 5;

  /* stampa le coordinate solo se
   * il punto si trova nel primo quadrante
   */
  if (x>=0 && y>=0) {
    printf("Il punto e' nel primo quadrante!\n");
    printf("(%d, %d)\n", x, y);
  }

  return 0;
}
