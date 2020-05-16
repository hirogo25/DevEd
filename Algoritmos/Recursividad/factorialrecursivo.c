#include <stdio.h>
long valor;
int n;

long factorial(int n)
{
  if(n==1)
  {
    return 1;
  }else
  {
    return (n * factorial(n-1));
  }
}

int main(int argc, char const *argv[]) {
  printf("Escriba el número a obtener su factorial: \n");
  scanf("%d",n);
  if(n > 0)
  {
    valor = factorial(n);
    printf("El factorial de %d es: %d\n",n, valor);
  }else
  {
    printf("El número debe de ser positivo\n");
  }

  return 0;
}
