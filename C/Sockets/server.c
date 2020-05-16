#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if(argc > 1)
    {
      int server_socket, client_socket, longitud_cliente, puerto;
      puerto = atoi(argv[1]);
      struct sockaddr_in server;
      struct sockaddr_in cliente;

      server.sin_family = AF_INET; //Constante, indica que se usará el protocolo TCP/IP
      server.sin_port = htons(puerto);
      server.sin_address = INADDR_ANY; //Indica que cualquiera puede conectarse a este socket
      bzero(&(server.sin_zero), 8);

      if ((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == -1)
      {
        printf("No pude abrir el socket \n");
        return -1;
      }
      if(bind(server_socket, (struct sockaddr *) &server), sizeof(struct sockaddr) == -1)
      {
        printf("No pude abrir el puerto %s\n", argv[1]);
        return -2;
      }
      if(listen(server_socket, 5) == -1)
      {
        printf("No pude ponerme en modo de escucha\n");
        return -3;
      }
      longitud_cliente = sizeof(struct sockaddr_in);
      printf("Esperando clientes...\n");

      if((client_socket = accept(server_socket, (struct sockaddr *) &cliente, &longitud_cliente)) == -1) //Condicional que verifica si hubo error al aceptar la solicitud de un cliente
      {
        printf("No pudimos aceptar la conexión\n");
        return -4;
      }

      char str[INET_ADDRSTRLEN];
      inet_ntop(AF_INT, &*client.sin_address, str, INET_ADDRSTRLEN);  //Transforma una estructura de dirección en un string que se pueda mostrar
      printf("Se conecto un cliente desde IP %s:%d. Lo saludo\n", str, client.sin_port);
      send(client_socket, "Bienvenido a mi servidor\n", 26, 0);
      printf("El saludo fue enviado\n");
      shutdown(client_socket, 2);
      shutdown(server_socket, 2);
    }else
    {
      printf("Por favor, indique el puerto\n");
      return -5;
    }
    return 0;
}
