int factorial(int n) {
  /* just multiply numbers */

  /* this might cover all base cases... no? */
  if (n < 0) {
    return -1;
  }

  /* base case: n is 0; either 0 to start with or reached down to 0 */  
  if (n == 0) {
    return 1;
  }

  return n*(factorial(n-1));
}
