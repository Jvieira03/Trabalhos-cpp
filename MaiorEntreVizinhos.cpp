#include <iostream>
#include <cmath>

using namespace std;

#define n 6 // defini n em 6 

int main() 
{
    int vetor[n]; // vetor das 6 posições
    int i=0; // variável para posições iniciada em 0 até 5
    int valor_encontrado=0; // variável para quantos valores encontrados

    cout<<"Digite os valores:"<<endl;
    while (i<n) // enquanto i for menor que o n(valor definido em 6)
    {
        cin>>vetor[i];  // entrada
        if (vetor[i]<0) // se for menor que zero mostra valor inválido
        {
            cout<<"Valor invalido"<<endl; // mostrar valor inválido
            return 0;
        }
        i++; // para repetição
    }

    for (i=0; i<n; i++) // for visto na aula, para i menor que n ele vai repetir
        {
           if (i==0) // se for igual a zero
           {
               if(vetor[i]>vetor[i+1]) // para comparar o primeiro número tem que ser maior que o vetor mais 1 posição
               {
                   cout<<"Maior entre vizinhos:"<< vetor[i] <<endl; // mostra o valor se é meior
                   valor_encontrado++; //  faz a soma de quanto valores encontrados tipo um contador
               }
           }
           if (i>=1 && i<=4) // faz a conferencia dos números no meio que começa na posição 1 e 4 que é e ultima posição
           {
               if(vetor[i]>vetor[i-1] && vetor[i]>vetor[i+1]) // se o vetor for maio que o vetor menos 1 posição e maior que 1 posição
               {
                   cout<<"Maior entre vizinhos:"<< vetor[i] <<endl; // mostra o vetor
                   valor_encontrado++; // faz a contagem e armazena na variável
               }
           }
           if(i==5) // se for na ultima posição
           {
               if(vetor[i]>vetor[i-1]) // se o vetor for maior que a posição anterior
               {
                   cout<<"Maior entre vizinhos:"<< vetor[i] <<endl; // mostra o vetor
                   valor_encontrado++; // faz a contagem e armazena na variável
               }
           }
        }
         if (valor_encontrado==0) // se o tiver valor de zero na variável 
           {
              cout<<"Nenhum valor encontrado"<<endl; // mostra o cout
           }
         else // se não ele mostra o valor que tem na variável
           {
             cout<<valor_encontrado<<" valores encontrados"<<endl;
           }  
}