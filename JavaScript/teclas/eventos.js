var cuadrito = document.getElementById("lienzo");
var papel = cuadrito.getContext("2d");
var x = 450;
var y = 450;
var colorLinea = "blue";
var movimiento = 10;

dibujarLinea("red", 450, 450, 451, 451, papel);

document.addEventListener("mousedown", dibujoMouse);
document.addEventListener("mouseup", dibujoMouse);
document.addEventListener("click", dibujoMouse);

function dibujoMouse (evento){
  console.log(evento);
}


var teclas = {
  UP: 38,
  DOWN: 40,
  LEFT: 37,
  RIGHT: 39,
};



document.addEventListener("keyup", dibujarTeclado);

function dibujarTeclado(evento) {
  if (evento.keyCode == teclas.UP){
    dibujarLinea(colorLinea, x, y, x, y - movimiento, papel);
    y = y - movimiento;
  }

  if (evento.keyCode == teclas.DOWN){
    dibujarLinea(colorLinea, x, y, x, y + movimiento, papel);
    y = y + movimiento;
  }
  if (evento.keyCode == teclas.LEFT){
    dibujarLinea(colorLinea, x, y, x - movimiento, y, papel);
    x = x - movimiento;
 }
  if (evento.keyCode == teclas.RIGHT){
    dibujarLinea(colorLinea, x, y, x + movimiento, y, papel);
    x = x + movimiento;
  }
}



function dibujarLinea(color, xinicial, yinicial, xfinal, yfinal,lienzo)
{
  lienzo.beginPath();
  lienzo.strokeStyle = color;
  lienzo.lineWidth = 5;
  lienzo.moveTo(xinicial,yinicial);
  lienzo.lineTo(xfinal,yfinal);
  lienzo.stroke();
  lienzo.closePath();
}
