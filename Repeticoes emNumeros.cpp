#include <iostream>
#include <cmath>

using namespace std;

long long numDigitos(long long x) // função número de digitos
{

  int contador=0; // contador para guardar os números de digitos

     while (x>=1)
     {
        x=x/10; // divide entrada por 10
        contador=contador+1; // soma o contador
     }
  return contador; // retorna contador
}
long long numDezenas(long long x) // número de dezenas
{
   int contador=1;
   int dezena1;

   while (contador<=x) // enquanto contador for menor que a entrada
     {
        x=x/10; // divide o numero por 10 até contador ser igual a x
        contador++; // contador mais 1
     }

     if (contador%2==0) // se contador dividido por 2 tiver resto 0
     {
        dezena1= contador/2;
     }
     if (contador%2!=0) // se o contador dividido por dois o resto for diferente de zero
     {
        dezena1=(contador+1)/2;
     }
     return dezena1;   //  retorna para o dezena apóes fazer toda a função
}
int dezena(long long x, int n) // função dezena 
{
  int contador=0;
  int temp;

  while(contador<n) // contador for menor que a entrada
  {
     x = x/100;  
     contador++;
  }
  temp = x%100; // o resto da entrada é guardado na int temp
  return temp; // após tudo retorna para a variável
}
int temRepeticoes(long long x, int &j, int &z) // j quantidade de repetiçoes, z dezena mais repetida
{
   int contador=0; // contador primario iniciado em zero
   int cont; // contador para enquanto número de dezenas for menor que o cont, contador de dezena
   int contadorRep; // contador de repetições
   int dezena_analisada; // dezena analisada
   int dezenaconfere; // confere a dezena
 
   while (contador<numDezenas(x))  // enquanto o contador for menor que a função
   {
      contadorRep=0; // contador de repetições inicia em zero
      dezena_analisada = dezena(x,contador); // chama a função
      cont=0;
       while (cont<numDezenas(x))  // enquanto contador for menor que o numero de dezenas
      { 
         dezenaconfere = dezena(x, cont); // chama a função e guarda na variável
         if (dezena_analisada==dezenaconfere) // se a dezena analisada for igual a variável da dezena conferida
         { 
            contadorRep=contadorRep+1; // contador de repetições mais um
         }
         cont=cont+1;
      }
      if(contadorRep>j) // se o contador for maior que a quantidade de repetições
      {
         j = contadorRep; // a quantidade de repetições é igual ao contador de repetições
         z = dezena_analisada; // dezena mais repetida é igual a dezena analisada
      }
      contador=contador+1;
   }
   if (j>=1) // se a quantidade repetida for maior que um
   {
     return 1; // retorna 1 verdadeiro
   }
   else //  se não retorna falso
   {
      return 0;
   }
}

int main()
{
    long long n; // entrada 
    long long guardar; // guarda o resultado da função
    long long calcnumdez; // guarda o resultado da função
    int z=1; // dezena mais repetida inicia  1
    int j=0; // quantidade de repetições inicia a 0

    cout<<"Digite o codigo: "<<endl;
    cin>>n; // entrada 
    if(n<=0) // se entrada for menor ou igual a zero
    {
       cout<<"O codigo deve ser maior que 0"<<endl;
       return 0;
    }

    guardar=numDigitos(n); // chama função
    calcnumdez=numDezenas(n);

    cout<<"O codigo tem "<<guardar<<" digito(s)"<<endl; // mostra os digitos 
    cout<<"O codigo tem "<<calcnumdez<<" dezena(s)"<<endl; // mostra as dezenas
    if (temRepeticoes(n,j,z)==1 && j!=1) // chama a função repetições e se for verdade executa
    {
      cout<<"O codigo tem repeticoes"<<endl; 
      cout<<"A dezena mais repetida eh: "<<z<<" e repete "<<j<< " vezes"<<endl; // mostra a quantidade de repetições e dezena mais repetida
    }
    if(j==1) // se aquantidade de repetições for igual a um ele não tem repetições
    {
       cout<<"O codigo nao tem repeticoes"<<endl;
    }
    return 0;
}