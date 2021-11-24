#include <iostream>
using namespace std;

int quadPerf(int x)
{
    int cont_total=1; // variáveis do contador 
    int cont=1;
    int soma = 1;
       
       while(cont_total < x) // loop para salvar o valor dos termos e valor do num/x;
       { 
        cont = cont + 2;
        cont_total=cont_total + cont;
        soma = soma + 1;
       }

        if (x == cont_total) // condição para se o quadrado for perfeito
       { 
       cout <<"Este valor eh quadrado perfeito e sua raiz quadrada eh "<< soma <<endl;
       }
        if (x != cont_total && x >0) // condição para se o quadrado não for perfeito
      {
        cout<<"Este valor nao eh quadrado perfeito"<<endl;
      }
    return 0;
}
int main()
{
  int num; // variável do valor de entrada
 
  cout << "Digite valores positivos:"<<endl; // valor de entrada
  cin >> num; //  digitar o valor de entrada

  while (num != 0 ) // loop enquanto o num for diferente de zero
  {
    if (num < 0)
    {
      cout<<"Valor invalido"<<endl;
    }

  if (num == 0)
       {
            cout<<"";
            return 0;
       }
    
    quadPerf(num); // puxa a função quadPerf
    cin >> num;
  }

   return 0;

}
