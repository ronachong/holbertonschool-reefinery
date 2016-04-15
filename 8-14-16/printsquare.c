#include <stdio.h>
void print_row(char a, char b, int n);

void print_square(int n) {
  int i;
  /* if n is 0 or less, print a new line? */
  if (n < 1) {
    printf("\n");
  }
  /* if n is 1, print one o */
  else if (n == 1) {
    printf("o\n");
  }
  else {
    /* print first row */
    print_row('o', '-', n);
  
    /* print rows between */
    for (i = 0; i < n - 2; i++) {
      print_row('|', ' ', n);
    }

    /* print last row */
    print_row('o', '-', n);
  }
}

void print_row(char a, char b, int n) {
  int i;

  printf("%c", a);
  for (i = 0; i < n - 2; i++) {
    printf("%c", b);
  }
  printf("%c\n", a);
}
