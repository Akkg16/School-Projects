//4. Napisać program obliczający n! w dwóch wersjach (wersja z for i wersja z while).
#include <stdio.h>

int main(){
    unsigned long long int n, i, silnia;
    do
    {
        printf("Podaj liczbe calkowita dodatnia z zakresu [1,31]: ");
        scanf("%d", &n);
        if(n<=0) printf("Podano niepoprawna wartosc\n");
        if(n>31) printf("Podano niepoprawna wartosc\n");
    } while (n<=0||n>31);
    
    for(i=1, silnia=1; i<=n; i++)
    {
        silnia*=i;
    }
    printf("Silnia z %d to %d\n", n, silnia);

    while(i<n){
        silnia*=i;
        i++;
    }
    printf("Silnia z %d to %d\n", n, silnia);


    getchar();
    return 0;
}