#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <process.h>

int main (int argc, const char * argv[])
{
  int shared = 2;
  int pid = fork(); /*La funcion fork crea un nuevo proceso hijo, al cual le asigna el PID de 0.
                    A partir de este punto, el programa crea un clon de si mismo*/

  if (pid) //Si devuelve algo diferente de 0, es el proceso Padre
  {
    shared = 1;
    printf("Luke, soy tu padre, mi PID es %d y tu PID es %d shared = %d\n", getpid(), pid, shared);
    wait(NULL); //wait hace que el proceso padre espere a que todos sus hijos hayan finalizado para proseguir
    printf("Soy el padre otra vez\n");
  } else
  {
    shared = 0;
    printf("Soy el hijo, mi PID es %d  shared = %d\n", getpid(), shared);
    sleep(2); /*hace que el proceso se detenga por 2 segundos, y se reanude pasado ese tiempo.
              En el hiato, el proceso padre termina su espera (desde su perspectiva, el hijo ya concluyó)
              e imprime el mensaje*/
  }
  while(1);
  return 0;
}
