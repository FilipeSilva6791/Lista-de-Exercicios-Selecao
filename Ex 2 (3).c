#include<stdio.h>

int main (void)
{
int nt; //nota

printf ("Digite a nota do aluno:");
scanf ("%d",&nt);


//! ENCADEAMENTO DE IF'S
/*

if (nt>=0 && nt<=10)
{
    if (nt<3)
    {
      printf("\nConceito: E\n");
    }
    else
    {
        if(nt>=3 && nt <6)
        {
           printf("\nConceito: D\n");
        }
        else
        {
          if (nt>=6 && nt<8)
          {
              printf("\nConceito: C\n");
          }
          else
          {
              if (nt>=8 && nt<10)
              {
                  printf("\nConceito: B\n");
              }
              else
              {
                  if(nt=10)
                  {
                      printf ("\nConceito: A\n");
                  }
              }
          }
        }

    }

}
else
 {
   printf("\nNota fora da faixa de 0 a 10\n\n");
 }
}  */



//! ELSE IF

/*
if (nt>=0 && nt<3)
{
    printf ("\nConceito: E\n");
}
else if (nt>=3 && nt<6)
{
    printf ("\nConceito: D\n");
}
else if (nt>=6 && nt<8)
{
    printf ("\nConceito: C\n");
}
else if (nt>=8 && nt<10)
{
    printf ("\nConceito: B\n");
}
else if (nt==10)
{
    printf ("\nConceito: A\n");
}
else
{
    printf("\nNota fora da faixa de 0 a 10\n");
} */



//! SWITCH CASE

switch(nt)
{
    case 1:
    case 2: printf ("\nConceito: E\n"); break;
    case 3:
    case 4:
    case 5: printf ("\nConceito: D\n"); break;
    case 6:
    case 7: printf ("\nConceito: C\n"); break;
    case 8:
    case 9: printf ("\nConceito: B\n"); break;
    case 10: printf ("\nConceito: A\n"); break;
    default: printf ("\nConceito fora da faixa de 0 a 10\n"); break;
}

}







