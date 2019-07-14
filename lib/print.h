void printIntArray(int *p)
{
  int i = 0;
  while (*p)
  {
    printf("[%d] = %d\n", i, *p);
    p++;
    i++;
  }
}

void printCharArray(char *p)
{
  int i = 0;
  while (*p)
  {
    printf("[%d] = %c\n", i, *p);
    p++;
    i++;
  }
}