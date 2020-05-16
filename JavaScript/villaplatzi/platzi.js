var vp = document.getElementById("villaplatzi");
var papel = vp.getContext("2d");
/* Variables para movimiento del Pollo*/
var movimiento = 20;
var polloX = 250;
var polloY = 250;

var teclas = {
  UP: 38,
  DOWN: 40,
  LEFT: 37,
  RIGHT: 39,
};

/* var mapa = "tile.png";*/

var fondo = {
  url: "tile.png",
  cargaOK: false
}

var vaca = {
  url:"vaca.png",
  cargaOK: false
}

var cerdo ={
  url: "cerdo.png",
  cargaOK: false
}

var pollo ={
  url: "pollo.png",
  cargaOK: false
}

fondo.imagen = new Image();
fondo.imagen.src = fondo.url;
fondo.imagen.addEventListener("load", cargarFondo);

vaca.imagen = new Image();   /* Esta linea es el equivalente a colocar:
var vaca = {
  imagen: new Image()

Pero esta sintaxis no se permite en Javascript
}

 */
vaca.imagen.src = vaca.url;
vaca.imagen.addEventListener("load", cargarVacas);

cerdo.imagen = new Image();
cerdo.imagen.src = cerdo.url;
cerdo.imagen.addEventListener("load", cargarCerdos);

pollo.imagen = new Image();
pollo.imagen.src = pollo.url;
pollo.imagen.addEventListener("load", cargarPollos);

document.addEventListener("keyup", muevePollo);

function muevePollo(mueve){
  if(mueve.keyCode == teclas.UP){
    polloY = polloY - movimiento;
  }

  if(mueve.keyCode == teclas.DOWN){
    polloY = polloY + movimiento;
  }

  if(mueve.keyCode == teclas.LEFT){
    polloX = polloX - movimiento;
  }

  if(mueve.keyCode == teclas.RIGHT){
    polloX = polloX + movimiento;
  }
  dibujar();

}


function cargarFondo(){
  fondo.cargaOK = true;
  dibujar();
}

function cargarVacas() {
  vaca.cargaOK = true;
  dibujar();
}

function cargarCerdos() {
  cerdo.cargaOK = true;
  dibujar();
}

function cargarPollos() {
  pollo.cargaOK = true;
  dibujar();
}

function dibujar(){
  if (fondo.cargaOK){
    papel.drawImage(fondo.imagen, 0, 0)
  }
  for (var numVacas = 0; numVacas<11; numVacas++){
    if (vaca.cargaOK){
      papel.drawImage(vaca.imagen, aleatorio(0,420), aleatorio(0,420));
    }
  }
/*
  if (cerdo.cargaOK) {
    papel.drawImage(cerdo.imagen, aleatorio(0,420), aleatorio(0,420));
  }
*/
  if (pollo.cargaOK){
    papel.drawImage(pollo.imagen, polloX, polloY);
  }
}

/*
function dibujarVacas(){
  papel.drawImage(vaca, aleatorio(0,470), aleatorio(0,420));
}

function dibujarCerdos(){
  papel.drawImage(cerdo, aleatorio(0,430), aleatorio(0,420));
}

function dibujarPollos(){
  papel.drawImage(pollo, aleatorio(0,430), aleatorio(0,420));
}
*/

function aleatorio(min, max){

  var resultado;
  resultado = Math.floor(Math.random() * (max - min + 1)) + min;
  return resultado;

}
