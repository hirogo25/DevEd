"""
Quicksor requiere un pivote
A un lado del pivote quedan los número Menores
Al otro lado del Pivote quedan lo números mayores
"""

def particion(arr, low, high): #Particion va dividiendo el arreglo y a la vez va ordenando
    i = (low - 1) #Se le reduce 1 al low para que el apuntador i de inicio en el primer registro del arreglo
    pivot = arr[high] #pivot se inicializa en el punto más alto del arreglo
    for j in range(low, high): #Se usa auxiliar j y se indica que el for se realizará desde el 0 al máximo valor
        if arr[j] <= pivot: #Sólo ocurre si el valor en arr[j] es menor que el valor apuntado por pivot
            i = i + 1 #Se incrementa en 1 el valor del auxiliar i
            arr[i], arr[j] = arr[j], arr[i] #

    arr[i+1], arr[high] = arr[high], arr[i+1]
    return (i+1)

def quickSort(arr, low, high)
    if low < high
        pi = particion(arr, low, high)
        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)

arr[1992, 1990, 1986, 10, 156, 47850, 568, 15263, 15, 5647]
n = len(arr)
quickSort(arr, 0, n-1)
print("Arreglo Ordenado: ")

for i in range(n):
    print("%d", %arr[i]), #coma ',' sirve para concatenar
