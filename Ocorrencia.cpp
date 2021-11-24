#include <iostream>

using namespace std;
int ocorrencia(int a, int b)
{
    int subtracao; // variável para conter a conta
    int subtracao2;
    
    subtracao =a-b; // subtração do valor a menos valor b
    subtracao2 =b-a;
    if (subtracao==b) // se a variável for igual ao valor b retorna a 3
     {
         return 3;
     }
     if(subtracao2==a) // se a variável for igual ao valor b retorna a 3
     {
         return 3;
     }

     if (b*3==a) // se a entrada vezes 3 for igual a, retorna 1
    {
        return 1;
    }
    if (b==a) // se a entrada for igual a outra retorna 0
    {
        return 2;
    }
    else // se nada se identificar com os if acima retorna a 0
    {
       return 0;
    }
}
int main()
{
    int entrada1; // variáveis de entrada
    int entrada2;
    int Valorcontaocorrencia; // variável que contem a conta obtida na função ocorrencia
    int contador1,contador2,contador3,contador4; // contador de cada ocasião para mostrar resultado

    cout<<"Digite um conjunto de pares de numeros inteiros:"<<endl;
    cin>>entrada1 >> entrada2;

    if (entrada1==0 && entrada2 == 0) // se a entrada for 0 é denominado sem entrada
    {
        cout<<"Sem entrada";
        return 0;
    }
    contador1=0; // valor inicial do contador é 0
    contador2=0;
    contador3=0;
    contador4=0;
    while (entrada1!=0 || entrada2!=0) // enquanto a entrada for diferente de zero ela ira continuar o loop
    {
       Valorcontaocorrencia=ocorrencia(entrada1, entrada2); // puxa a função

       if (Valorcontaocorrencia==1) // se o valor for igual a 1 ele puxa a o valor do contador1
       {
          contador1++; // jeito simplificado para variável+1 que aprendi e utilizo.
       }
       if (Valorcontaocorrencia==2) // se o valor for igual a 2 ele puxa a o valor do contador2
       {
           contador2++;
       }
       if (Valorcontaocorrencia==3) // se o valor for igual a 3 ele puxa a o valor do contador3
       {
           contador3++;
       }
       if (Valorcontaocorrencia==0) // se o valor for igual a 0 ele puxa a o valor do contador4
       {
           contador4++;
       }

       cin>>entrada1>>entrada2; // entradas
    }
    cout<<"Total de ocorrencias da situacao 1): "<<contador1<<endl;  // resposta para cada ocorrencia
    cout<<"Total de ocorrencias da situacao 2): "<<contador2<<endl;
    cout<<"Total de ocorrencias da situacao 3): "<<contador3<<endl;
}