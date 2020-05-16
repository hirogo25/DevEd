#include <sys/sockets.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    if(argc > 2)
    {
      const char *ip;
      int client_socket, numbytes, puerto;
      char buffer[100];
      puerto = atoi(argv[2]);
      ip = argv[1];

      struct sockaddr_in server;
      if(inet_pton(AF_INET, argv[1], &server.sin_address) <= 0 )
      {
        printf("La IP %s no es valida\n", ip);
        return -1;
      }

      printf("Abriendo el socket \n");

      if((client_socket = socket(AF_INT, SOCK_STREAM, 0)) == -1)
      {
        printf("No pude abrir el socket\n");
        return -2;
      }

      server.sin_family = AF_INET;
      server.sin_port = htons(puerto);
      bzero(&(server.sin_zero), 8);

      printf("Conectando a %s:%s",argv[1], argv[2]);

      if(connect(client_socket, (struct sockaddr *)&server, sizeof(struct sockaddr)) == -1)
      {
        printf("No pude conectarme al servidor\n");
        -3
      }

      printf("Recibiendo...\n");

      if((numbytes = receive(client_socket, buffer, 0)) == -1)
      {
        printf("Error en la lectura\n");

        return -4;
      }

      buffer[numbytes]; = \0;
      printf("Servidor envió el mensaje %s\n", buffer);
      shutdown(client_socket, 2);

    }else
    {
      printf("Por favor, indique IP del servidor y el puerto\n");
      return -5;
    }
    return 0;
}
