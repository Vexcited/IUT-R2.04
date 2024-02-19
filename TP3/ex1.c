#include<stdio.h>

void main(void) {
  char *couleur[] = {
    "rouge",
    "vert",
    "bleu",
    "blanc",
    "noir",
    "orange",
    NULL
  };
  
  // Afficher les couleurs (utiliser %s dans le printf)
  for (char **str = couleur; *str != NULL; str++) {
    printf("%s\n", *str);
  }

  printf("-------------\n");

  // Afficher toutes les couleurs sans le premier caractère : ouge, ert, range, ... (utiliser %s dans le printf)
  for (char **str = couleur; *str != NULL; str++) {
    printf("%s\n", *str+1);
  }

  printf("-------------\n");

  // Afficher en majuscules
  for (char **str = couleur; *str != NULL; str++) {
    for (char *ch = *str; *ch != '\0'; ch++) {
      printf("%c", *ch - 32);
    }

    printf("\n");
  }

  printf("-------------\n");

  // Afficher les couleurs sans utiliser %s dans le printf
  for (char **str = couleur; *str != NULL; str++) {
    for (char *ch = *str; *ch != '\0'; ch++) {
      printf("%c", *ch);
    }

    printf("\n");
  }
}


