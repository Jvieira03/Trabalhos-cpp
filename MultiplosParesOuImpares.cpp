#include <iostream>
#include<cmath>

using namespace std;

int main()
{
  int N;
  int M;
  long Spar =0;
  long Simpar=0;
  long Qpar=0;
  long Qimpar=0;
  long cont = 1;
  int valor = 1;

    cout <<"Entre com o valor final do intervalo:" <<endl;
    cin>>N;

    if ( N <= 0)
    {
        cout << "Valor invalido" <<endl;
        return 0;
    }

    cout <<"Entre com o valor do divisor:" <<endl;
    cin>>M;

    if ( M <= 0)
    {
        cout << "Valor invalido" <<endl;
        return 0;
    }
    
    cont = 1;
    
    while ( cont <= N)
      {
        if (cont%M == 0) 
        
        if( cont%2 == 0)
        {
            Qpar = Qpar + valor;
            Spar = Spar + cont;
        }
        else if ( cont%2 != 0)
        {
           Qimpar = Qimpar + valor;
           Simpar = Simpar + cont;
        }

        cont = cont + 1;
      }
      cout << "Pares positivos e multiplos de "<< M << " menores ou iguais a "<< N << ":"<<endl;
      cout << "quantidade=" << Qpar << " soma="<<Spar<<endl;
      cout << "Impares positivos e multiplos de "<< M << " menores ou iguais a "<< N << ":"<<endl;
      cout << "quantidade=" << Qimpar << " soma ="<<Simpar<<endl;
      return 0;
    
}