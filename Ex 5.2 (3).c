# include<stdio.h>

char conversor (char);

int main ()
{
    char min,maiusc; // minusculo \ maiusculo

    printf ("Digite um caracter maiusculo: ");
    scanf ("%c",&maiusc);

    if (maiusc<65 || maiusc>90){
    printf("\nO caractere digitado nao eh maiusculo. \n\n");
    }else{
    min = conversor(maiusc);
    printf ("\nO caracter minusculo correspondente a este eh: %c\n\n", min);
    }
}

char conversor (char maiusculo)
{
    char minusculo;
    minusculo=maiusculo+32;
    return (minusculo);
}


