const ejemplo = require('express');  //Extrae contenido de libreria Express y lo deposita en la variable express
const app = ejemplo();  //Invoca el constructor de la clase invocada

app.get("/", inicio);
app.get("/cursos", cursos);


function inicio(peticion, resultado){
  resultado.send("Este es el <strong>HOME</strong>");
}

function cursos(peticion, resultado){
  resultado.send("Estos son los cursos");
}
app.listen(8989);  //Método para poner a correr un servidor; el parámetro es el puerto que va estar escuchando

/*
app.get('/', function (req, res) {  //Esta funcion arma el get para una url
  res.send('Hello World')
})*/
