#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double fib(double n){
  if (n < 2)
    return n;
  else
    return fib(n-1) + fib(n-2);
}

int main()
{
    int longeur=0,i=0;
    double tab[50],temp;
    clock_t t1,t2;

    printf("donnez la longeur du tableau \n");
    scanf("%d",&longeur);
    for(i=0;i<longeur;i++)
    {
        printf("donner le chiffre %d \n",i+1);
        scanf("%lf",&tab[i]);
    }

  for(i=0;i<longeur;i++)
  {
      t1=clock();
      double res=fib(tab[i]);
      t2=clock();
      temp=(double)(t2-t1)/CLOCKS_PER_SEC;

    //printf("le temp d'execution de fibonnaci du chiffre %lf est : %10.10lf \n",tab[i],temp);
    //printf("%lf \n",fib(tab[i
     printf("le resultat du %d est : %5.0f \n ",i+1,res);

  }
   getchar();

    return 0;
}
