var texto = document.getElementById ("texto_lineas");
var boton = document.getElementById('botoncito');

boton.addEventListener("click", dibujoClic);

var d = document.getElementById('dibujito');
var lienzo = d.getContext("2d");


/* console.log(lienzo);*/
/*
lienzo.beginPath();
lienzo.strokeStyle = "red";
lienzo.moveTo(100,100);
lienzo.lineTo(200,200);
lienzo.stroke();
lienzo.closePath(); */
                    /* Requerido para cerrar el camino y que la próxima línea inicie desde un punto fresco*/
                    /*Si no colocamos closePath, la próximo lineTo iniciará dede 200,200 */

/* FUNCIONES */
function dibujarLinea(color, xinicial, yinicial, xfinal, yfinal)
{
  lienzo.beginPath();
  lienzo.strokeStyle = color;
  lienzo.moveTo(xinicial,yinicial);
  lienzo.lineTo(xfinal,yfinal);
  lienzo.stroke();
  lienzo.closePath();
}

/*     //explicacion//
  Javascript lee todo el código antes de empezar a ejecutar
  Carga todas las funciones en la memoria, y después comienza a ejecutar el código general*/
function dibujoClic(){

  var numero_lineas = parseInt(texto.value);
  var lineas = numero_lineas;
  var divisiones = d.width/lineas;
  var yi, xf;
  var colorcito = "#AAF";
  l=1;

  while(l<lineas + 1) {

  yi = divisiones * l;
  xf = divisiones * (1+l);
  dibujarLinea(colorcito, 0, yi, xf, 300);
  console.log("Linea " + l);
  l++;

  }

  for (invertido=1; invertido < lineas; invertido++) {

    xi = invertido * divisiones;
    yf = invertido * (divisiones + 1);
    dibujarLinea("#ABA", xi, 0, 300, yf);
    console.log("Invertido " + invertido);

  }

}
