#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,suma;
    int i,n,k;
    do
    {
    printf("Ile elementow chcesz wczytać: ");
    k = scanf("%d", &n);
    if(k==0) printf("Blad formatu");
    while(getchar()!='\n');
    } while (k==0);
    
    for (i=0; i < n; i++)
    {
        do
        {
            printf("Podaj element, ktory chcesz zsumowac: ");
            k = scanf("%lf", &a);
            if(k==0) printf("Blad formatu");
            while(getchar()!='\n');
        } while (k==0);
        suma += a;
    }
    printf("Suma elementow wynosi: %lf", suma);
    getchar();
    return 0;
}