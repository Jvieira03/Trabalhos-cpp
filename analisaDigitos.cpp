#include <iostream>
#include <cmath>

using namespace std;

int analisaDigitos(long long x, int &primeiro_digito, int &ultimo_digito)
{
  int digito=0; // variável para digito
  ultimo_digito=x%10; // calcula o ultimo digito
  while (x>0) // loop para mostrar primeiro digito
  { 
      if (x==x) // se entrada for igual entrada
      {
          primeiro_digito=x;
      }
      x=x/10; // anda com a vírgula
      digito= digito + 1; // contador do digito

      if(x!= 0) // se a entrada for diferente de zero
      {
          primeiro_digito=x;
      }
  }
  if (x<0) // entrada for menor que zero
  {
      return 0;
  }
  return digito; // retorna para o digito
}

int main()
{
    long long entrada; // variável entrada
    int primeiro_digito=0; // variável primeiro digito na main
    int ultimo_digito=0; // variável ultimo digito na main
    int digito=0; // variável digito na main
    int guardar_entrada; // variável para guardar o valor de entrada 
    int soma = 0; // soma 

    cout<<"Digite a lista de numeros:";
    cin>>entrada; // entrada
    
    if (entrada==0) //  se a entrada for zero
    {
        cout<<"Nao foram fornecidos numeros";
        return 0;
    }

    while (entrada != 0) // enquanto for diferente de zero
    {
      guardar_entrada = entrada; // guarda entrada 
      digito = analisaDigitos(entrada,primeiro_digito,ultimo_digito); // chama a função
      
      if (entrada < 100 && entrada > 0 ) // se for menor que 100 e maior que zero
      {
        soma = soma + entrada; // soma das entradas menor que 3
      }
      if (entrada>0) // se a entrada for maior que zero
      {
        cout<<guardar_entrada<<" tem " << digito <<" digitos"<< endl;
        cout<<"Primeiro = " << primeiro_digito << endl;
        cout<<"Ultimo = "<< ultimo_digito << endl;
      }
      else // se não for maior que zero faz essa função
       {
        cout<<"O numero deve ser positivo"<<endl;
       }
      
      cin>>entrada; // entrada

    }
   cout<<"Soma dos numeros com uma quantidade de digitos menor que 3: "<<soma; // mostra o valor da soma
}