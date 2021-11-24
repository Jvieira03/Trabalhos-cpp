#include <iostream>
#include <cmath>

#define N 25
#define ND 75

using namespace std;

void descompactaVetor(int Q[], int V[], int cont, int Vd[]) // void para não retornar valor, defini os 4 parâmetros quantidade, valor, contador e vetor descompactado
{
   int i; // indíce
   int o; // nome alternativo para o segundo índice
   int p=0; //nome alternativo para o terceiro índice
 
  for ( i = 0; i < cont; i++) // for para passar em todas as posições do vetor q
  {
      for ( o = 0; o < Q[i]; o++) //  for para passar em todas as posições 
      {
          Vd[p]=V[i]; // vetor descompactado é igual vetor de valor
          p++; // faz o contador de p iniciado a 0 
      }
  }
}
void troca( int &a, int &b) // // void para não retornar valor, defini os dois parâmetros com & para ser o valor
{
    int armA; // variável para armazenar valor 

    armA=a; // variável equivale ao valor de a
    a=b; // a equivale ao valor de b
    b=armA; // b valor de b é armazenado na variável como foi ensinado na aula ai usei a e b
}
void espelhoVetor(int Vd[], int soma) // 
{
    int i;  // indice
    for ( i = 0; i < soma/2 ; i++) // passa por todas as posições 
    {
        troca(Vd[i], Vd[soma-1-i]); // chama a função troca, vetor descompactado é soma menos 1 posição e -i para pegar a ultima posição e substituir na troca
    }
}

int main()
{
  int Q[N]; // declaração de vetor quantidade
  int V[N]; // declaração de vetor de valor
  int Vd[ND]; // variável para vetor descompactado
  int entrada; // entrada dos valores
  int cont; // é um nome alternativo para o indíce
  int cont1; // numero de posição
  int soma; // guardar a soma 

   cout<<"Vetor de quantidades:"<<endl; // escrita para entrada de quantidade 
   soma=0; // defini numero de posição, cont e numero de posição em 0 para iniciar.
   cont=0;
   cont1=0;
   for ( cont = 0; cont < N; cont++) // percorre até o contador ser menor que N que foi definido inicialmente em 25
   {  
       cin>>entrada; // entrada de valores
       if (entrada>=0)  //  se a entrada for maior que 0
       {
         Q[cont]=entrada; // vetor de quantidade é igual a entrada
         soma=Q[cont] + soma; // soma é igual ao vetor de quantidade e soma todos os valores de entrada
         cont1++; //  esta contando e armazenando
       }
       else // se a função acima não for verdadeira usa um break e pula para próximo
       {
           break;
       }
   }

   if(soma>ND) // se a soma for maior que ND definido em 75 
   {
       cout<<"Forma descompactada teria "<< soma << " numeros, NAO cabem no vetor Vd"<<endl; // mostra o valor da soma e fala que não faz parte
       return 0; // finaliza o programa
   }
  
   cout<<"Vetor com os valores:"; // escrita para entrada
   for ( cont = 0; cont < cont1; cont++) // repete até o indice ser menor que o número de posições
   {
     cin>>V[cont]; /// segunda entrada de valores
   }

   descompactaVetor(Q, V, cont, Vd); // chama a função descompacta vetor(VD)

   cout<<"O vetor descompactado fica assim: ";
   for ( cont = 0; cont < soma; cont++) // faz o laço de repetição até o indice ser menor que a soma que deve ser menor que 75
   {
       cout<<Vd[cont]<<" "<<endl; // mostra o vetor descompactado
   }
   
   espelhoVetor(Vd, soma);  // chama a função

   cout<<"Espelhando esse vetor fica assim: "; // escrita para espelhar o vetor
   for ( cont = 0; cont < soma; cont++) // percorre até o indice ser menor que a soma da quantidade 
   {
       cout<<Vd[cont]<<" "; // mostra o espelhamento
   }
   
  return 0; // finaliza o programa
}