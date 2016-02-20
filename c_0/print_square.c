#include <stdio.h>
int print_char(char c);

void print_square(int n) {
  int dashes_per_side = n - 2;
  int spaces_per_side = n - 2;

  if (n < 1) {
    print_char('\n');
  }

  else if (n == 1) {
    printf("If conditional succeeds.");
    print_char('o');
    print_char('\n');
  }

  else {
    printf("Else conditional succeeds.");

    /* print top side ('o', dashes per side, 'o', '\n'); */
    print_char('o');
    for (; dashes_per_side > 0; dashes_per_side--) {
      print_char('-');
    }
    print_char('o');
    print_char('\n');

    dashes_per_side = n - 2;

    /* print middle sides ('-', space inside, '-', '\n', dashes per side times) */
    for (; dashes_per_side > 0; dashes_per_side--) {
      print_char('|');

      for (; spaces_per_side > 0; spaces_per_side--) {
	print_char(' ');
      }
      print_char('|');
      print_char('\n');
      spaces_per_side = n - 2;
    }

    dashes_per_side = n - 2;

    /* print bottom side ('o', dashes per side, 'o', '\n') */
    print_char('o');
    for (; dashes_per_side > 0; dashes_per_side--) {
      print_char('-');
    }
    print_char('o');
    print_char('\n');
  }
    
}
