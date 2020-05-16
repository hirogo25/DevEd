int main()
{

//Definición de variables
  int var;
  var = 1;
  var = var + 1;

//If
  if (var==1)
  {
    var = 2;
  } else
  {
    var = 3;
  }

//switch

switch (var)
{
  case 1:
          var = 10;
          break;
  case 2:
          var = 20;
          break;
  case 3:
          var = 30;
          break;
  default:
          var = 100;
          break;
}



  return 0;


}
