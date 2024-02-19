#include<stdio.h>

/**
 * Écrire un programme recevant plusieurs arguments sur la ligne de commande et affichant à l'écran :
 *   - le nombre d'arguments ;
 *   - l'ensemble de ces arguments dans l'ordre inverse de saisie.
 */
void main(int argc, char *argv[]) {
  printf("%d\n", argc);
  
  // argc = nombre d'arguments -> on fait -1 pour avoir l'indice
  // on fait i > 0 et pas i >= 0 car on veut pas le tout premier argument (à i = 0)
  for (int i = argc - 1; i > 0; i--) {
    printf("%s ", argv[i]);
  }

  printf("\n");
}
