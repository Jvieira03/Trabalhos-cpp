//Escreva um programa em C++ que imprime o preço de um ingresso para um parque de diversões. O programa deve ler, a partir do teclado, um número real representando o valor base do ingresso e um número inteiro representando a idade do usuário.

//O valor do ingresso deve ser calculado de acordo com as seguintes condições:

//Menores de 5 anos não pagam;
//Crianças entre 5 e 12 anos pagam meia-entrada;
//Adolescentes entre 13 e 17 anos têm 20% de desconto;
//Adultos entre 18 e 70 anos pagam o valor-base;
//Maiores de 70 anos não pagam;
//OBS.: Nos exemplos, o texto em negrito/vermelho representa a entrada do usuário e o texto em itálico representa a saída do programa. 
          // O programa deve se comportar como indicado nos exemplos abaixo, obtendo as entradas e mostrando as mensagens e resultados
       // NA MESMA SEQUÊNCIA E FORMATO (incluindo os textos das mensagens).

//Exemplo 1:
//Digite o valor-base do ingresso: 50
//Digite a idade do usuario: 15
//Valor final do ingresso: 40

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
