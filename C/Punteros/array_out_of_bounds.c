#include <stdio.h>

int main()
{
  int array[5];
  int i = 0;
  for(i = 0; i < 5; i++)
  {
    array[i] = i * 2;

  }
  for(i = 0; i < 6; i++)
  {
    printf("array[%d] = %d\n", i, array[i]);
  }
}
