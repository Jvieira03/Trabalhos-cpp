#include <iostream>
#include<cmath>

using namespace std;

int main()
{
  int N;
  int Qtd;
  float valor;
  int cont = 1;
  float subtotal = 0;
  float soma;
  float contaporc;
  float multi;
  float resultado;

  cout<< "Digite quantidade de itens no carrinho:"<<endl;
  cin>> N;

  if ( N <= 0)
  {
      cout << " Valor Invalido"<<endl;
      return 0;
  }

  cont = 1;
  
  while ( cont <= N)
  {
    cout << "Digite quantidade e valor do item:";
    cin>>Qtd>>valor;
     
      if ( Qtd <= 0 && valor <= 0)
      {
          cout<< "Valor Invalido"<< endl;
          continue;
      }
      
      if ( Qtd > 0 && valor > 0)
      {
          if ( Qtd >= 5)
          {
              multi = Qtd * valor;
              contaporc = Qtd * valor * 20 /100;
              resultado = multi - contaporc;
          }
          else
          {
              resultado = Qtd * valor;
          }
          subtotal = subtotal + resultado;
          cout<<"Subtotal: R$"<<subtotal<<endl;
      }
      
      cont++;
   }
   soma = subtotal;
   cout<< "Valor total da compra foi de: R$ "<< soma <<endl;

  return 0;


}