#include<stdio.h>

int main ()
{
 int a,b,c;

 printf("Digite tres numeros inteiros nos campos abaixo:\n");
 printf("Numero 1: ");
 scanf("%d",&a);
 printf("Numero 2: ");
 scanf("%d",&b);
 printf("Numero 3: ");
 scanf("%d",&c);

 printf("\nOs numeros digitados em ordem decrescente:\n");

 if(a>b && a>c)
 {
   if(b>c){printf("\n%d ; %d ; %d\n\n",a,b,c);}
   else {printf("\n%d ; %d ; %d\n\n",a,c,b);}
 }
 else if (b>a && b>c)
 {
   if(a>c){printf("\n%d ; %d ; %d\n\n",b,a,c);}
   else {printf("\n%d ; %d ; %d\n\n",b,c,a);}
 }
 else
 {
   if(a>b){printf("\n%d ; %d ; %d\n\n",c,a,b);}
   else {printf("\n%d ; %d ; %d\n\n",c,b,a);}
 }
}
