#include <stdio.h>

void main (void) {
  char *p[6] = {
    "ABC",
    "DEFGH",
    "IJKLM",
    "NOPQRS",
    "TUV",
    NULL
  };

  int i; // On itére pour avoir l'indice du tableau.
  for (i = 0; p[i] != NULL; i++);

  // Une fois terminé, on itère de i à 0.
  for (int ir = i - 1; ir >= 0; ir--) {
    printf("%s\n", p[ir]);
  }
}
