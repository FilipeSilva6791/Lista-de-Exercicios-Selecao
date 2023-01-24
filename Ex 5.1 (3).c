# include<stdio.h>

char conversor (char);

int main ()
{
    char min,maiusc; // minusculo \ maiusculo


    printf ("Digite um caracter minusculo: ");
    scanf ("%c",&min);

    if (min<97 || min>122)
    {
        printf("\nO caractere digitado nao eh minusculo\n\n");
    }else{

    maiusc = conversor(min);

    printf ("\nO caracter maiusculo correspondente a este eh: %c\n\n", maiusc);
    }
}

char conversor (char minusculo)

{
    char maiusculo;

    maiusculo=minusculo-32;
    return (maiusculo);

}

