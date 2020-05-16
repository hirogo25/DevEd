var imagenes = [];
imagenes["Cauchin"] = "vaca.png";
imagenes["Pokacho"] = "pollo.png";
imagenes["Tocinauro"] = "cerdo.png";

/*
var cauchin = new Pakiman("Cauchin", 100, 30);
var pokacho = new Pakiman("Pokacho", 80, 50);
var tocinauro = new Pakiman("Tocinauro", 120, 40);
*/

var coleccion = [];
coleccion.push(new Pakiman("Cauchin", 100, 30));
coleccion.push(new Pakiman("Pokacho", 80, 50));
coleccion.push(new Pakiman("Tocinauro", 120, 40));


/*
for(p in coleccion)  : p toma el valor del índice en cada iteración; puede tomar el valor de arreglo asociativo (como en imagenes)
for(p of coleccion)  : p toma el valor del contenido del índice (en este caso, los objetos Pakiman)

in itera en el índice; of itera sobre los objetos

*/
for(var p of coleccion){ /* Ciclo que opera por la cantidad de objetos contenidos en el arreglo*/
  p.mostrar();
}

/*console.log(cauchin, pokacho, tocinauro);*/
