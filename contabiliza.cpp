#include <iostream>
#include <cmath>

using namespace std;

void contabiliza(int x, int y, int &n, int &d, int &c, int &maior) 
{
  n=0; // variável para guardar se entrada1 for igual a entrada2
  d=0; // variável para guardar se entrada1 for maior que a entrada2
  c=0; // variável para guardar se entrada1 for menor que a entrada2

  if(x == y) // se e entrada um for igual a dois
  {
    n=n+1;
  }
  if (x>y) //  se a entrada um for maior que a dois
  {
    d=d+1;
    maior=x-y; // difrença de entrada1 e a entrada2
  }
  if (y>x) // se a entrada dois for maior que a 3
  {
    c=c+1;
    maior=y-x;
  }
}

int main()
{
    int entrada1; // valor entrada um
    int entrada2; //  valor entrada dois
    int contador=0; // para guardar a contagem
    int contador1=0;
    int contador2=0;
    int n; // variável de n na função
    int d; // variável de d na função
    int c; // variável de c na função
    int maior=0; // variavel para maior que é a diferença na função 
    int maiorInicial=0; // guarda o valor maior inicial que é iniciado em 0
    int guardar; // guarda a diferença na main da entrada1 e entrada2 e igualdade
    int acumular=0; // acumula a variável guardar
    int entradaA; // guarda valor da entrada1
    int entradaB; // guarda valor da entrada2

    cout<<"Digite sequencia de 2 inteiros:"<<endl;
     cin>>entrada1; // primeira entrada
     cin>>entrada2; // segunda entrada
     if (entrada1==0 && entrada2==0) // se as entradas forem igual a 0
     {
         cout<<"Sem conjunto de valores";
         return 0;
     }
     
    while (entrada1!=0 && entrada2!=0) // enquanto as entradas forem diferente de zero
    {
        if(entrada1==entrada2) // se a entrada1 for igual a 2
        {
          guardar=0; // guarda o valor na variável 
        }
        if (entrada1>entrada2) // se a entrada1 for maior que a segunda
         {
           guardar=entrada1-entrada2; // faz a primeira entrada menos e segunda e guarda da variável
         }
        if (entrada2>entrada1) // se entrada2 for maior que a entrada1
         {
          guardar=entrada2-entrada1; // faz a segunda entrada menos a primeira e guarda da variável
         }
        if (guardar > acumular) //se o valor da variável guardar for maior que o 
        {
            acumular=guardar; // acumula o resultado de guardar
            entradaA=entrada1; // entrada1 é guardada na função entradaA
            entradaB=entrada2;
        }
    
        contabiliza(entrada1,entrada2,n,d,c,maior); // chama a função

        if (entrada1!=0 && entrada2!=0) // se a entrada for diferente de zero
        {
          contador = contador + n; // guarda a conta no contador 
        }
        if (entrada1>entrada2) // se a entrada1 for maior que a entrada2
        {
          contador1 = contador1 + d; // guarda a conta no contador1
        }
        if (entrada1<entrada2) // se a entrada2 for maior que a entrada1
        {
          contador2 = contador2 + c; // guarda a conta no contador2
        }
        if (maior>maiorInicial) // se maior um for maior que o maiorinicial
        {
            maiorInicial=maior; // maior vai ser guarado em maiorInicial
        }
        
        cin>>entrada1; // para repetir as entradas
        cin>>entrada2;
    }

    cout<<"Quantidade ordem crescente: "<<contador2<<endl; // para mostrar os resultados
    cout<<"Quantidade ordem decrescente: "<<contador1<<endl;
    cout<<"Quantidade ordem neutra: "<<contador<<endl;
    cout<<entradaA<<" "<<entradaB<<" eh o maior intervalo: "<<maiorInicial<<endl;
}
