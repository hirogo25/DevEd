import turtle

myTurtle = turtle.Turtle()
myWin = turtle.Screen()

def draw(myTurtle, length): 
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(90)
        draw(myTurtle, length-10)

draw(myTurtle, 100)
myWin.exitonclick()


#Comentario en Python de una linea

"""
Comentario en Python
de varias lineas
"""

"""
def draw(myTurtle, length): #En Python no se usan llaves, se usa la identación para saber que a qué corresponde cada línea
    if length > 0:   #En este caso, el if identado indica que esta línea está dentro del bloque ed código draw
#Si el if estuviera desde el inicio de la linea (sin sangria) estaría fuera del draw
        myTurtle.forward(length)
        myTurtle.left(90)
        draw(myTurtle, length-10)
"""
