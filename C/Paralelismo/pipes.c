#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <wait.h>


#define MSGSIZE 16 //Define una constante (macro), que servira para definir el tamño del mensaje
int main(int argc, char const *argv[])
{
    FILE * in;
    int pid, p[2];
    if(pipe(p) < 0)
    {
      printf("Pipes no pudieron ser creados\n");
      return -2;
    }
    if(! (in = fopen(argv[1], "r")))
    {
      printf("No pude leer el archivo %s\n", argv[1]);
      return -2;
    }
    if(pid = fork())
    {
      char buffer[MSGSIZE];
      printf("Soy el Padre. Voy a leer desde %s\n", argv[1]);
      while(fget(buffer, MSGSIZE, in))
      {
        printf("Lei %s. Dime %d, Cuál es el caracter más grande?\n", buffer, pid);
        write(p[1], buffer, MSGSIZE);
      }
      close(p[1]);
      printf("Esperando a mis hijos\n");
      wait(NULL);
      FCLOSE(in);
    }else
    {
      close(p[1]); //Cierra el pipe de escritura en el hijo
      printf("Soy el hijo, espero que aparezca algo en el pipe\n");
      char buffer[MSGSIZE], max;
      while(read(p[0], buffer, MSGSIZE) > 0)
      {
          printf("Lei %s desde el pipe\n", buffer);
          max = buffer[0];
          for (int i = 0; i < MSGSIZE; i++)
          {
            if (buffer[i] > max)
            {
              max = buffer[i];
            }
          }
          printf("Max: %c", max);
      }
    }

    return 0;
}
