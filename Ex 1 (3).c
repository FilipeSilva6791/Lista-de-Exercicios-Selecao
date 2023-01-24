#include <stdio.h>

int main ()
{
  int a;

  printf("Digite um numero inteiro: ");
  scanf ("%d",&a);

  if(a>=0)
   { if(a%2==0)
     {printf("\nNumero positivo\nParidade: Par\n");}
     else
     {printf("\nNumero positivo\nParidade: Impar\n");}
   }
  else
   { printf("\nEste numero nao eh positivo !\n");}
}
