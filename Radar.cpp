#include <iostream>
#include<cmath>

using namespace std;

int radar(int x, int y) // função para calcular a porcentagem e multa
{
   if ( x < (y * 0.2) + y) // calcula se a velocidade de até 20%
   {
       cout<<"Excesso de velocidade. Multa recebida: R$150"<<endl;
       return 150;
   }
   if (x < (y * 0.5) + y) //// calcula se a velocidade entre 20 e 50%
   {
       cout<<"Excesso de velocidade. Multa recebida: R$200"<<endl;
       return 200;
   }
   else // se não for as outras condições vai ser essa condição, ou seja, superior aos 50%
   {
       cout<<"Excesso de velocidade. Multa recebida: R$900"<<endl;
       return 900;
   }
}

int main()
{
    int vmaxima; // variável maxima
    int vmedida; // variável medida
    int cont = 0; // contador ou soma dos valores de todas as multas

    cout<<"Insira a velocidade maxima permitida: ";
    cin>>vmaxima; // entrada da variável maxima
    cout<<endl;

    if (vmaxima<=0) //  se a variável é menor ou igual a 0
    {
        cout<<"Valor invalido";
        return 0;
    }

    cout<<"Insira a velocidade medida:";
    cin>>vmedida; // entrada variável medida
    cout<<endl;

    
   cont = 0;
   while (vmedida != 0) // loop se variável medida for diferente de 0
   {
       if (vmedida<=vmaxima)
      {
        cout<<"Velocidade permitida"<<endl;
      }
      else
      {
        cont = cont + radar(vmedida, vmaxima); // soma das contas somadas 
      }
      cout<<"Insira a velocidade medida:";
      cin>>vmedida;
      cout<<endl;
   }

   cout<<"Valor total das multas: R$"<<cont; // valor da soma das multas 
   return 0;

}