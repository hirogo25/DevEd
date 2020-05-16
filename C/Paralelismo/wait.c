#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <process.h>

int main (int argc, const char * argv[])
{
  int pid = fork(); /*La funcion fork crea un nuevo proceso hijo, al cual le asigna el PID de 0.
                    A partir de este punto, el programa crea un clon de si mismo*/
  if (pid) //Si devuelve algo diferente de 0, es el proceso Padre
  {
    printf("Luke, soy tu padre, mi PID es %d y tu PID es %d\n", getpid(), pid);
    wait(NULL); //wait hace que el proceso padre espere a que todos sus hijos hayan finalizado para proseguir
    printf("Soy el padre otra vez\n");
  } else
  {
    printf("Soy el hijo, mi PID es %d\n", getpid());
    sleep(2); /*hace que el proceso se detenga por 2 segundos, y se reanude pasado ese tiempo.
              En el hiato, el proceso padre termina su espera (desde su perspectiva, el hijo ya concluyó)
              e imprime el mensaje*/
  }
  while(1);
  return 0;
}
