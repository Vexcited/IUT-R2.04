#include<stdio.h>
#define N 8

void main(void) {
  char *jour[N] = {
    "lundi",
    "mardi",
    "mercredi",
    "jeudi",
    "vendredi",
    "samedi",
    "dimanche",
    NULL
  };

  // A. Afficher les jours de la semaine du lundi au dimanche en utilisant %s
  for(int i = 0; jour[i] != NULL; i++) {
    printf("%s\n", jour[i]);
  }

  printf("---------------\n");

  // B. Afficher les jours de la semaine du lundi au dimanche en utilisant %c
  for(int i = 0; jour[i] != NULL; i++) {
    for(int j = 0; jour[i][j] != '\0'; j++) {
      printf("%c", jour[i][j]);
    }
    printf("\n");
  }

  printf("---------------\n");

  // C. Afficher les jours de la semaine du dimanche au lundi en utilisant %s
  for (int i = 6; i >= 0; i--) {
    printf("%s\n", jour[i]);
  }

  printf("---------------\n");

  // D. Permuter les jours de la semaine (le 1er jour sera permuté avec le dernier, le 2ème avec l’avant dernier, etc.)
  // Vous permutez les pointeurs, pas les chaînes de caractères
  char *temp;
  for (int i = 0; i < N/2; i++) {
    temp = jour[i];
    jour[i] = jour[N-2 - i];
    jour[N-2 - i] = temp;
  }

  // E. Afficher le nouveau tableau en majuscules sans modifier les chaînes en mémoire
  for (char **i = jour; *i != NULL; i++) {
    for (char *j = *i; *j != '\0'; j++) {
      printf("%c", *j - 32);
    }

    printf("\n");
  }
}
