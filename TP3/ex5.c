#include<stdio.h>

/**
 * Écrire un programme recevant exactement 2 arguments et affichant un message si les deux arguments
 * sont identiques ou non.
 */
int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Erreur: ce programme attend exactement 2 arguments.\n");
    return 2;
  }

  // On vérifie les chaînes de caractères.
  for (int i = 0; argv[1][i] != '\0' || argv[2][i] != '\0'; i++) {
    if (argv[1][i] != argv[2][i]) {
      printf("Les deux arguments ne sont pas identiques.\n");
      return 1;
    }
  }

  printf("Les deux arguments sont identiques.\n");
  return 0;
}
