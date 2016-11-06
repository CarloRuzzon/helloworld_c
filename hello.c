/* hello.c */

/* Stampa un saluto */

/* Istruzioni per la compilazione e l'esecuzione:
 *
 * Compilare:
 * $ gcc -c hello.c -o hello.o
 *
 * Link:
 * $ gcc hello.o -o hello
 *
 * Eseguire:
 * $ ./hello
 */


/* stdio.h e' richiesto da printf() utilizzata piu' sotto */
#include <stdio.h>

/* tutti i programmi C iniziano da main */
int main()
{
  /* printf() permette di stampare a video */
  printf("Hello, World!\n");
 
  /* restituisce 0 al sistema operativo e termina.
   * 0 significa tutto OK */
  return 0; 
}
