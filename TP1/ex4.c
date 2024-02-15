#include<stdio.h>

void main (void) {
  char ch[81];
  char *p;

  printf("Saisir une chaine: ");
  gets(ch);

  p = ch;
  while (*p != '\0') {
    p++;
  }

  printf("%d\n", p - ch);
}
