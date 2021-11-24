// Programa sobre recorde da maratona em segundos
#include <iostream>

 using namespace std;

 int main()
 {
     int h;
     int m;
     int s;
     int hvalor; 
     int mvalor;
     int svalor;
     int seutempsegundos;
     int resultado; 

     cout<< "Entre com o tempo recorde da maratona (hora min seg):"<<endl;
     cin>>hvalor>> mvalor>> svalor;
     
     if ( hvalor > 0)
     {
          h = hvalor * 3600;
     }
     else
     {
        cout<< "Entrada Invalida"<<endl;
        return 0;
     }
     
     if ( mvalor <= 59)
      {
        m = mvalor * 60;
        s = svalor;
      }
     else
      {
        cout<< "Entrada invalida"<<endl;
        return 0;
      }

      if (svalor <= 59)
      {
        s = svalor;
      }
      else
      {
        cout<< "Entrada invalida"<<endl;
        return 0;
      }
      
       
       resultado = h + m + s;
       cout<< "Tempo recorde em segundos = " << resultado << " segundos "<<endl;

       cout<< "Entre com o seu tempo em segundos:"<<endl;
       cin>> seutempsegundos;

       if ( seutempsegundos <= 0)
       {
          cout<< " Entrada invalida"<<endl;
          return 0;
       }

       if ( seutempsegundos > resultado)
        {
          cout<< "Tempo superior ao recorde em "<< seutempsegundos - resultado<< " segundos "<<endl;
        }
       
       if ( seutempsegundos < resultado )
       {
         cout << "Bateu o recorde em "<< resultado - seutempsegundos << " segundos"<<endl;
       }
       
       if ( seutempsegundos == resultado)
       {
         cout<< "Tempo igual ao recorde atual"<<endl;
       }
       
        return 0;

 }