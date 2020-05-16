#include <stdio.h>
#include <String.h>
#include "libcadenas.h"

int comparaCadena(const char * cadena1, const char * cadena2, const char * cadena3)
{

    if(strlen(cadena1) > strlen (cadena2))
    {
        if (strlen(cadena1) > strlen (cadena3))
        {
          printf("La cadena mas larga es: %s\n", cadena1);
        }else
        {
          printf("La cadena mas larga es: %s\n", cadena3);
        }
    }else
    {
      if(strlen(cadena2) > strlen(cadena3))
      {
        printf("La cadena mas larga es: %s\n", cadena2);
      }else
      {
        printf("La cadena mas larga es: %s\n", cadena3);
      }
    }
    return 0;
}
