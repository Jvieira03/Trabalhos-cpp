// Faça um programa em C++ que leia um valor numérico inteiro N com no mínimo 5 dígitos. Seu programa deve gerar um valor  A expresso pelos dois último dígitos de N, e um valor  B expresso pelos dígitos restantes de N. Por exemplo, se N é 12345, o valor A será 45 e o valor B será 123.
//Se o valor B for divisível pelo valor A, seu programa deve exibir a mensagem "Numero fornecido aceito" seguido do quociente da divisão de B por A. Caso contrário, deve ser exibida a mensagem "Numero fornecido recusado". Se valor N fornecido não tiver mínimo de 5 dígitos, seu programa deve exibir a mensagem "Entrada invalida" e o programa deve terminar.
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int N;
    int A;
    int B;
    int I;
    float div;
    
     
     cout<< "Digite valor (minimo 5 digitos):"<<endl;
     cin>>N;
     
     //cout<< " resultado B: "<< B << " resultado A: "<< A <<endl;

      if( N>9999) 
       {
         A = N % 100;
         B = N / 100;
         cout<< " resultado B: "<< B << " resultado A: "<< A <<endl;
       }
        else
       {
        cout<<"Entrada invalida"<<endl;
        return 0;
       }
       I=B%A;
       if (I==0)
       {
        div = B/A;
         cout<<"Numero fornecido aceito: "<<div<<endl;
         return 0;
       }
       else
       {
         cout<<" Numero fornecido recusado "<<endl;

       }
       return 0;
      
}  