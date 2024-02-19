#include<stdio.h>

/**
 * Écrire un utilitaire affiche affichant sur stdout les arguments de la ligne de commande.
 * Chaque argument sera affiché sur une ligne séparé.
 * 
 * SYNTAXE: affiche [ -r | -M | -m ] arg1 [arg...]
 * 
 * Les crochets signifient "élément optionnel"
 * La barre verticale signifie "ou bien"
 * 
 * -r : Affiche les arguments dans l'ordre inverse
 * -M : Affiche les arguments en majuscule
 * -n : Affiche les arguments en mettant en majuscule uniquement le premier caractère
 */
void main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Erreur: ce programme attend au moins 1 argument.\n");
    return;
  }

  if (argc == 2) {
    printf("%s\n", argv[1]);
    return;
  }

  int skip_index_args = 0;
  int reverse = 0;
  int upper = 0;
  int upperFirstChar = 0;
  if (argc >= 3) {

    // shouldnt accept options in the args
    for (int i = 1; i < argc; i++) {
      if (argv[i][0] == '-') {
        if (argv[i][1] == 'r') {
          reverse = 1;
        } else if (argv[i][1] == 'M') {
          upper = 1;
        } else if (argv[i][1] == 'm') {
          upperFirstChar = 1;
        } else {
          printf("Erreur: option inconnue.\n");
          return;
        }
        skip_index_args++;
      }
    }
  }

  if (argc - skip_index_args == 2) {
    printf("%s\n", argv[1 + skip_index_args]);
    return;
  }

  if (reverse == 0) {
    for (int i = 1 + skip_index_args; i < argc; i++) {
      if (upper) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
          if (argv[i][j] >= 'a' && argv[i][j] <= 'z') {
            printf("%c", argv[i][j] - 32);
          } else {
            printf("%c", argv[i][j]);
          }
        }
        printf("\n");
      }
      else if (upperFirstChar) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
          if (j == 0) {
            if (argv[i][j] >= 'A' && argv[i][j] <= 'Z') {
              printf("%c", argv[i][j] + 32);
            } else {
              printf("%c", argv[i][j]);
            }
          } else {
            printf("%c", argv[i][j]);
          }
        }

        printf("\n");
      }
    }
  }
  else {
    for (int i = argc - 1; i > 0; i--) {
      if (upper) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
          if (argv[i][j] >= 'a' && argv[i][j] <= 'z') {
            printf("%c", argv[i][j] - 32);
          } else {
            printf("%c", argv[i][j]);
          }
        }
        printf("\n");
      }
      else if (upperFirstChar) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
          if (j == 0) {
            if (argv[i][j] >= 'A' && argv[i][j] <= 'Z') {
              printf("%c", argv[i][j] + 32);
            } else {
              printf("%c", argv[i][j]);
            }
          } else {
            printf("%c", argv[i][j]);
          }
        }

        printf("\n");
      }
    }
  }

}
