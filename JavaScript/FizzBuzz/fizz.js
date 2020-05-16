var numeros = 100;
var noDivisible = true;
for (var i = 1; i <= 100; i++){
  if (i%3 == 0){
    document.write("Fizz")
    noDivisible = false;
  }

  if (i%5 == 0){
    document.write("Buzz")
    noDivisible = false;
  }

  if(noDivisible){
    document.write(i);
  }
  noDivisible = true;
  document.write("<br />");
}
