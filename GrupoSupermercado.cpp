#include <iostream>
#include<cmath>

using namespace std;

int main()
{
  int N;
  int Qtd;
  float valor;
  int cont = 1;
  float resultado;
  int M;
  int soma = 0;
  int contador;
  float subtotal;

  cout<< "Digite a quantidade de pessoas:"<<endl;
  cin>>M;

  if ( M <= 0)
  {
      cout << " Valor Invalido"<<endl;
      return 0;
  }
  
 else 
 {

   contador = 1;

  while ( contador <= M )
    {
      cout<< "Digite quantidade de itens no carrinho do morador "<<contador<<": "<<endl;
      cin>> N;
  
      if ( N <= 0)
       {
      cout << " Valor Invalido"<<endl;
      continue;
       }
       
      else
       {
          cont = 1;
          subtotal = 0;
          while ( cont <= N )
          {
            cout << "Digite quantidade e valor do item:"<<endl;
            cin>>Qtd>>valor;

            if ( Qtd <= 0 || valor <= 0)
            {
              cout<< "Valor Invalido"<< endl;
              continue;
            }
           else 
            {
              resultado = Qtd * valor;
              cont++;
              subtotal = subtotal + resultado;
            }
          }   
            contador++;
        } 
       cout<< "Valor total da compra do morador "<< contador - 1<< ": R$ "<<subtotal<<endl;
    }
    
 }
    
   return 0;
}