#include <stdio.h>
int main() 
{
  int  r;
  float d, c, a; 
  printf("Inserire il raggio del cerchio: ");
  scanf("%d", &r);
  d = r * 2;
  a = r * r * 3.14159;
  c = r * 2 * 3.14159;
  printf("Il diametro e': %d * 2 = %f\n", r, d);
  printf("L'area e': %d * %d * 3.14159 = %f\n", r, r, a);
  printf("La circonferenza e': %d * 2 * 3.14159 = %f\n", r, c);
return 0;
}
