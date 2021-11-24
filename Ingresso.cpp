// Programa sobre o valor do ingresso de cada idade
#include <iostream>

 using namespace std;

 int main()
 {
     double (ing);
     int ide;
     float contameia; 
     float contaporc; 
     float contabase; 
     float conta20;
     int idee = 0;
    

     cout<< " Digite o valor-base do ingresso:"<<endl;
     cin>> ing;
     cout<< " Digite a idade do usuario:"<<endl;
     cin>> ide;

     if (ide <= 4 || ide >= 71)
     {  

        cout << " Valor final do ingresso: "<< idee<<endl;
        return 0;
     }
      
     if (ide >= 6 && ide <= 12)
     {
       
        contameia = ing / 2;
        cout<< " Valor final do ingresso:"<< contameia<<endl;
        return 0;
    
     }
     

     if (ide >= 13 && ide <= 17)
     {
        
        contaporc = ing * 20 /100;
        conta20 = ing - contaporc;
        cout<< "Valor final do ingresso:"<<conta20<<endl;
        return 0;
     }
     if (ide >= 18 && ide <= 70 )
     {
        cout<< " Valor final do ingresso:"<<ing<<endl;
        return 0;
     }

     
      return 0;

 }