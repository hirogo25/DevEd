class Billete {
  constructor(v, c){
    this.valor = v;
    this.cantidad = c;

    this.imagen = new Image();
    this.imagen.src = imagenes[this.valor];
  }
}

function entregarDinero(){
  var t = document.getElementById("dinero");
  dinero = parseInt(t.value);
  resultado.innerHTML = "";
  for(bi of caja){
    if(dinero > 0){
      div = Math.floor(dinero / bi.valor);
      if(div > bi.cantidad){
        papeles = bi.cantidad;
      }
      else{
        papeles = div;
      }
      entregado.push(new Billete(bi.valor, papeles));
      dinero = dinero - (bi.valor * papeles);
      bi.cantidad = bi.cantidad - papeles;
    }
  }
  if(dinero > 0){
      resultado.innerHTML = "No tengo dinero ni nada que dar <br />";
  }
  else{
    for(e of entregado){
      for(var billeteEntregado = 0; billeteEntregado < e.cantidad; billeteEntregado++){
        resultado.innerHTML = resultado.innerHTML + "<image src=" + e.imagen.src + "> ";
      }
      resultado.innerHTML = resultado.innerHTML + "<br />";
    }
  }
  entregado = [];
}

var imagenes = []
imagenes["100"] = "100.png";
imagenes["50"] = "50.png";
imagenes["10"] = "10.png";

var caja=[];
caja.push(new Billete(100, 20));
caja.push(new Billete(50, 30));
caja.push(new Billete(10, 50));

var dinero;
var entregado = [];
var div = 0;
var papeles = 0;

var resultado = document.getElementById("resultado");
var b = document.getElementById("extraer");
b.addEventListener("click", entregarDinero);
