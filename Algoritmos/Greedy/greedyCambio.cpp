#include<iostreams>
#include<climits>

using namespace std;

int greedyCambio(int coinSet[], int n, int N)
{
  if(N==0)
    return 0;
  if(N<0)
    return INT_MAX;

  int coins = INT_MAX;

  for(int i = 0;i < n;i++) //Ciclo para recorrer el coinset para ir definiendo el cambio
  {
    int res = greedyChange(coinset, n, N - coinset[i]);
    if(resultado != INT_MAX)
    {
      coins = min(coins, res+1);
    }
  }
  return coins;
}

int main(int argc, char const *argv[]) {
  int coinSet[] = {1, 5, 10, 15, 20};
  int n = sizeof(coinSet)/sizeof(coinset[0]);
  int N = 27;
  cout << "El minimo de monedas a entregar para dar cambio es: "
      <<gredyChange(coinSet, n, N);
  return 0;
}
