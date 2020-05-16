public class StringReverse
{
  public string ReverseString(String str)
  {
    if(str.isEmpty())
    {
      return str;
    }else
    {
      return reverseString(str.substring(1)) + str.charAt(0);
      //substring: retorna un subconjunto del String. Si sólo tiene un argumento, este indica a partir que qué posición inicia el subconjunto
      //charAt: retorna el caracter de un String que se encuentra en la posición indicada en el argumento
    }
  }

  public static void main(String[] args)
  {
    StringReverse obj = new StringReverse();
    String result = obj.reverseString("Algoritmos son amor");
    System.out.println(result);
  }
}
