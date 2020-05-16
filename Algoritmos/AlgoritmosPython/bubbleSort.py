def bubbleSort(array):
    n = len(array)
    cambios = 1
    for i in range(n): #Por estandar, los Auxiliares se definen: i, j, k...
          print("Iteracion %d",i)
          print(array)
          cambios=0
          for j in range(0,n-1-i):
            if array[j] > array[j+1]:
              array[j], array[j+1] = array[j+1], array[j]  #Se invierten los valores de las posiciones del arreglo
              cambios=1 ##Indica que hubo un intercambio de posiciones en el recorrido
          if(cambios<1): #Si no hay intercambios de posiciones (cambios no pasas a 1) se rompe el ciclo
            break

array=[190,1200,1,2,4,55,100,6,800]

bubbleSort(array)

print("El arreglo ordenado de forma ascendente: ")

for i in range(len(array)):
    print("%d", array[i]),
