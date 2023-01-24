#include <stdio.h>

int main ()
{
int i;
float a,b,c;

printf("Digite os numeros nos campos abaixo:\n");
printf("Numero 1: ");
scanf("%f",&a);
printf("Numero 2: ");
scanf("%f",&b);
printf("Numero 3: ");
scanf("%f",&c);

printf("\nEscolha como voce quer que esses numeros sejam exibidos:\n\n");
printf("Digite 1 para exibir os numeros de forma crescente;\n");
printf("Digite 2 para exibir os numeros de forma decrescente;\n");
printf("Digite 3 para exibir os numeros de forma que o maior numero fique entre os outros dois.\n");
printf("\nOpcao escolhida: ");
scanf ("%d",&i);

if (i==1)
{
        if(a>b && a>c)
        {
        if(b>c){printf("\n%.2f ; %.2f ; %.2f\n\n",c,b,a);}
        else {printf("\n%.2f ; %.2f ; %.2f\n\n",b,c,a);}
        }
        else if (b>a && b>c)
        {
        if(a>c){printf("\n%.2f ; %.2f ; %.2f\n\n",c,a,b);}
        else {printf("\n%.2f ; %.2f ; %.2f\n\n",a,c,b);}
        }
        else
        {
        if(a>b){printf("\n%.2f ; %.2f ; %.2f\n\n",b,a,c);}
        else {printf("\n%.2f ; %.2f ; %.2f\n\n",a,b,c);}
        }
}
else if (i==2){
        if(a>b && a>c)
        {
        if(b>c){printf("\n%.2f ; %.2f ; %.2f\n\n",a,b,c);}
        else {printf("\n%.2f ; %.2f ; %.2f\n\n",a,c,b);}
        }
        else if (b>a && b>c)
        {
        if(a>c){printf("\n%.2f ; %.2f ; %.2f\n\n",b,a,c);}
        else {printf("\n%.2f ; %.2f ; %.2f\n\n",b,c,a);}
        }
        else
        {
        if(a>b){printf("\n%.2f ; %.2f ; %.2f\n\n",c,a,b);}
        else {printf("\n%.2f ; %.2f ; %.2f\n\n",c,b,a);}
        }
}
else if (i==3){
        if(a>b && a>c)
        {
        printf("\n%.2f ; %.2f ; %.2f\n\n",b,a,c);
        }
        else if (b>a && b>c)
        {
        printf("\n%.2f ; %.2f ; %.2f\n\n",a,b,c);
        }
        else
        {
        printf("\n%.2f ; %.2f ; %.2f\n\n",b,c,a);
        }
}
else
        { printf("\nEsta opcao nao existe\n\n"); }
}
