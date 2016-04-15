#include <stdio.h>
#include <stdlib.h>

void print_row(char a, char b, int n);
void print_square(int n);

int main(int argc, char **argv) {
  if (argc > 2) {
    printf("Please limit your input to one integer-string-thing.\n");
    return 1;
  }
  
  print_square(atoi(argv[1]));
  return 0;
}
