#include <stdio.h>

char donner_majuscule (char c) {
  if (c >= 'a' && c <= 'z') {
    return c - 32;
  }

  return c;
}

void mettre_en_majuscule (char *str) {
  char *p;
  
  for (p = str; *p != '\0'; p++) {
    *p = donner_majuscule(*p);
  }
}

int donner_longueur(char *str) {
  char *p = str;

  while (*p != '\0') {
    p++;
  }

  return p - str;
}

void inverser(char *str) {
  char *p = str;
  char *q = str + donner_longueur(str) - 1;
  char temp;

  while (p < q) {
    temp = *p;
    *p = *q;
    *q = temp;
    p++;
    q--;
  }
}

void saisir (char *str) {
  printf("Saisir une chaîne de caractère: ");
  gets(str);
}

void afficher (char *str) {
  printf("%s\n", str);
}

int sont_egales (char *str1, char *str2) {
  char *p = str1;
  char *q = str2;

  while (*p != '\0' && *q != '\0') {
    if (*p != *q) {
      return 0;
    }

    p++;
    q++;
  }

  return *p == *q;
}

int main (void) {
  // 0. Réserver deux chaînes de caractères de 81 caractères.
  char str1[81];
  char str2[81];

  // 1. Saisie de la première chaîne.
  saisir(str1);
  
  // 2. Saisie de la deuxième chaîne.
  saisir(str2);

  // 3. Calcul de la longueur de la première chaîne.
  int longueur_str1 = donner_longueur(str1);
  
  // 4. Affichage de la longueur de la première chaîne.
  printf("Longueur str1: %d\n", longueur_str1);
  
  // 5. Mise en majuscule de la première chaîne.
  mettre_en_majuscule(str1);
  
  // 6. Affichage de la première chaîne.
  afficher(str1);

  // 7. Mise en majuscule de la deuxième chaîne.
  mettre_en_majuscule(str2);

  // 8. Affichage de la deuxième chaîne
  afficher(str2);
  
  // 9. Comparaison des deux chaînes.
  int comparaison = sont_egales(str1, str2);

  // 10. Affichage du texte "égal" ou "différent" suivant l'état de la comparaison.
  if (comparaison) afficher("égal");
  else afficher("différent");

  // 11. Inversion de la deuxième chaîne.
  inverser(str2);

  // 12. Affichage de la deuxième chaîne inversée.
  afficher(str2);

  return 0;
}
