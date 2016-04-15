#include <stdio.h>

void print_array(int *a, int n) {
  /* loop through array and print each element */
  int i;

  if (n <= 0) {
    printf("\n");
    return;
  }

  /*else*/  
  for (i = 0; i < n; i++) {
    printf("%i", a[i]);
    if (i == n - 1) {
      printf("\n");
    } else {
      printf(", ");
    }
  }
  return;
}
