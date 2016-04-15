int str_len(char *str) {
  /* loop thru str array and count up */
  int i;

  for (i=0; str[i] != '\0'; i++) {}
  return i;
}
