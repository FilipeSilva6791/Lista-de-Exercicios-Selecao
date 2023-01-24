#include <stdio.h>

char conversor (char numero);

int main ()
{
   char num;
   int valor;

   printf("Digite um caracter numerico de 0 a 9:");
   scanf ("%c",&num);

   if(num<48 || num>57){
        printf("\nO caractere digitado nao eh numerico\n\n");
   }else{
   valor=conversor(num);
   printf ("\nO valor nominal do caracter digitado eh: %d\n\n ",valor);
   }
}


char conversor (char numero)
{
    int valornominal;
    valornominal=numero-'0';
    return (valornominal);
}

