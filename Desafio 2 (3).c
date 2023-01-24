#include <stdio.h>
#include <math.h>

int main ()
{
int i;
float a,b,c, media;

printf("Digite as notas do aluno nos campos abaixo:\n");
printf("Nota 1: ");
scanf("%f",&a);
printf("Nota 2: ");
scanf("%f",&b);
printf("Nota 3: ");
scanf("%f",&c);

printf("\nEscolha como voce quer que essas notas sejam exibidas:\n\n");
printf("Digite 1 para exibir a media aritmetica das notas;\n");
printf("Digite 2 para exibir a media ponderada das notas;\n");
printf("Digite 3 para exibir a media harmonica das notas;\n");
printf("Digite 4 para exibir a media geometrica das notas.\n");

printf("\nOpcao escolhida: ");
scanf ("%d",&i);

if (i==1)
{
    media=((a+b+c)/3);
    printf ("\nA media aritmetica das notas eh : %.2f\n\n",media);
}
else if (i==2)
{
    if(a>b && a>c)
    {
    media=(((a*4)+(b*3)+(c*3))/10);
    printf("\nA media ponderada das notas eh: %.2f\n\n",media);
    }
    else if (b>a && b>c)
    {
    media=(((a*3)+(b*4)+(c*3))/10);
    printf("\nA media ponderada das notas eh: %.2f\n\n",media);
    }
    else
    {
    media=(((a*3)+(b*3)+(c*4))/10);
    printf("\nA media ponderada das notas eh: %.2f\n\n",media);
    }
}
else if (i==3)
{
    media=(3/((1/a)+(1/b)+(1/c)));
    printf("\nA media harmonica das notas eh: %.2f\n\n",media);
}
else if (i==4)
{
    media=(pow((a*b*c),(0.33333333333))); /// -> (a.b.c)^1/3 -> raiz cubica de (a.b.c)
    printf("\nA media geometrica das notas eh: %.2f\n\n",media);
}
else
{
    printf("\nOpcao invalida.\n\n");
}
}
