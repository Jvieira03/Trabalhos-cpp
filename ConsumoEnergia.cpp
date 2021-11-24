#include <iostream>
#include<cmath>

using namespace std;

int main()
{
   int N;
   int cont = 0;
   int cont1 = 0;
   int contador = 0;
   int Matual;
   int Mantigo;
   float Mediaaumento = 0;
   float Mediaqueda = 0;
   float media = 0;
   float cont2 = 0;
   int x = 0;
   

   cout<<"N:";
   cin>>N;

   if ( N <= 0)
  {
      cout << " Valor Invalido";
      return 0;
  }
  contador = 1;

  while (contador <= N)
  {
    x = x +1;
    cout << " Consumo casa "<<contador<<" (kW): ";
    cin>>Matual >> Mantigo;
    
    if ( Matual < 0 || Mantigo < 0)
    {
        cout<< "Valor Invalido"<< endl;
        continue;
    }
    
    if ( Matual >= 0 || Mantigo >= 0)
    {
      if (Matual > Mantigo )
       {
         Mediaaumento = Matual - Mantigo;
         cont2 = cont2 + 1;
         media = media + Mediaaumento;
       }
       
       if (Mantigo > Matual)
        {
         Mediaqueda = Mantigo - Matual;
         cont = cont + 1;
         cont1 = cont1 + Mediaqueda;
        }
    }
    
    contador++;
    
  }
 
  if ( media > 0 )
  {
      cout<< "Media de aumento de consumo ("<<cont2<<" casas): "<<media/cont2<<" kW" <<endl;
  }
  if ( cont1 > 0)
  {
      cout<< "Media de queda de consumo ("<<cont<<" casas): " <<cont1/cont<<" kW "<<endl;
  }
  else if ( Matual == Mantigo)
   {
    cout<< "Consumo no bairro estavel";
  }
  
  return 0;

}