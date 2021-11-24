#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int N;
    float v1;
    float v2;
    float v3;
    float soma = 0;
    float Ttotal;
    int cont;

    cout<<"Insira o identificador do corredor:"<<endl;
    cin>>N;
    if ( N < 0)
    {
        cout<<"Valor Invalido"<<endl;
        return 0;
    }
    
    if ( N == 0) 
    {
        cout<<"Nao teve corrida"<<endl;
        return 0;
    }
   else
   {
       Ttotal = 0;
       cont = N;
       while ( N!= 0)
       {
         cout<< "Insira os tempos das 3 voltas do corredor "<<N<<": "<<endl;
         cin>> v1>> v2>> v3;
         soma = v1 + v2 + v3;
          
          if ( soma < Ttotal || Ttotal == 0)
          {
              Ttotal = soma;
              cont = N;
          }
          if (Ttotal < soma)
          {
              Ttotal = Ttotal;
              cont = cont;
          }
          cout<<"Insira o identificador do corredor:"<<endl;
          cin>>N;

       }
        cout<<"Corredor com menor tempo:"<<cont<<endl;
        cout<<"Tempo total da corrida: "<<Ttotal<<endl;
        return 0;
   }

}