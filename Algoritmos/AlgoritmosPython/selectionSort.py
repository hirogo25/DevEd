import sys
from datetime import datetime

array =[20,5,21,6,23,7,34,999,68]

def selectionSort(array):
    #recorre todo el arreglo
    largo=len(array)
    print("Variables")
    print("Largo: %d" %largo)
    print(array[1])
    for i in range(len(array)):
        #encontrar el valor mínimo restante en el subarreglo desordenado
        idxDes = i
        print(array)
        for j in range(i+1, len(array)):
            print("Ciclo %d" %j)
            print("%d" %array[j])
            if array[j] < array[idxDes]:
                idxDes = j

        #ya que encontramos el mínimo elemento lo cambiamos por el primer valor del arreglo desordenado
        array[i], array[idxDes] = array[idxDes], array[i]

#Ejecucion de la funcion
tiempoInicial = datetime.now()
selectionSort(array)
print("Arreglo ordenado:")
for i in range(len(array)):
    print("%d" %array[i])

print(datetime.now() - tiempoInicial),
