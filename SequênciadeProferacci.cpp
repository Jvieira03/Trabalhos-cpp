#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float EPS;
    float A;
    float cont = 1;
    float a1;
    float resultado;

   cout<<"Digite EPS:"<<endl;
   cin>>EPS;

   if ( EPS <= 0 )
   {
       cout <<"Valor Invalido";
       return 0;
   }

   cout<<"Digite A:"<<endl;
   cin>>A;

   if ( A <= 0 )
   {
       cout <<"Valor Invalido";
       return 0;
   }
   
    cont = cont + 1;
    a1 = A / (2 *(cont - 1));
    resultado = a1;
    

   while ( a1 > EPS)
   {
       if ( cont <= A)
       {
         a1 = a1/(2*cont);
         cont++;
         resultado= resultado + a1;
       }
    
   }
   
   cout<< "Soma de "<<cont - 1<< " termos = "<<resultado;
   return 0;
}