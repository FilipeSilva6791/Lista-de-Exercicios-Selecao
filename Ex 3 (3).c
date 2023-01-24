#include <stdio.h>

int main ()
{
 float a,b,c;

 printf("Digite tres numeros nos campos abaixo:\n");
 printf("Numero 1: ");
 scanf("%f",&a);
 printf("Numero 2: ");
 scanf("%f",&b);
 printf("Numero 3: ");
 scanf("%f",&c);

 if(a>b && a>c)
 {
     printf("\nO maior destes e o numero %.2f\n\n",a);
 }
 else if (b>a && b>c)
 {
     printf("\nO maior destes e o numero %.2f\n\n",b);
 }
 else
 {
     printf("\nO maior destes eh o numero %.2f\n\n",c);
 }
}
