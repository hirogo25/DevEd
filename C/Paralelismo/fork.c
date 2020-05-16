#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <process.h>

int main (int argc, const char * argv[])
{
  int pid = fork(); /*La funcion fork crea un nuevo proceso hijo, al cual le asigna el PID de 0.
                    A partir de este punto, el programa crea un clon de si mismo*/
  if (pid) //Si devuelve algo diferente de 0, es el proceso Padre
  {
    printf("Luke, soy tu padre, mi PID es %d y tu PID es %d\n", getpid(), pid);
  } else
  {
    printf("Soy el hijo, mi PID es %d\n", getpid());
  }
  while(1);
  return 0;
}
