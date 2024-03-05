#include <stdio.h>

char toUpper (char chr) {
  if (chr >= 97 && chr <= 122) {
    return chr - 32;
  }

  return chr;
}

int main (int argc, char *argv[]) {
  char **ptr;
  char *chr;

  /**
   * 0 = output as is
   * 1 = inverted (-r)
   * 2 = uppercase (-M)
   * 3 = uppercase only first letter (-m)
   * 
   * -1 = invalid
   */
  int mode = 0;

  // set ourselves on the first argument
  ptr = argv + 1;
  if (ptr == NULL) return 0; // empty

  // set ourselves on the first letter of the first argument
  chr = *ptr;
  if (*chr == '\0') return 0; // empty

  // parameter has been set, let's check what it is
  if (*chr == '-') {
    switch (*(chr + 1)) {
      case 'r':
        mode = 1;
        break;
      case 'M':
        mode = 2;
        break;
      case 'm':
        mode = 3;
        break;
      default:
        mode = -1;
    }

    if (mode == -1) {
      printf("error: unknown parameter has been passed");
      return 1;
    }

    // parameter only have one character, so fail if more are given.
    if (*(chr + 2) != '\0') {
      printf("error: parameter should only have one character.");
      return 2;
    }

    // set ptr to next argument
    ptr++;
  }

  if (mode == 1) {
    char **start_ptr;

    // set ptr at the end of the arguments list
    // keep start_ptr at the current position
    for (start_ptr = ptr; *ptr != NULL; ptr++);

    // loop backwards
    for (ptr--; ptr != start_ptr - 1; ptr--) {
      printf("%s\n", *ptr);
    }
  }
  else {
    for (; *ptr != NULL; ptr++) {
      // when we output as is, just use %s
      if (mode == 0) printf("%s\n", *ptr);
      else {
        // set the current character ptr to first character
        chr = *ptr;

        if (mode == 3) {
          // uppercase the first character
          *chr = toUpper(*chr);
          printf("%c", *chr);

          // go to next character (for the loop)
          chr++;
        }

        for (; *chr != '\0'; chr++) {
          // uppercase every letter
          if (mode == 2) printf("%c", toUpper(*chr));
          
          // print the character as is
          else if (mode == 3) printf("%c", *chr);
        }

        // break line
        printf("\n");
      }
    }
  }

  return 0;
}