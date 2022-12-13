#include <stdio.h>

int main()
{
    double tempPocz, tempKon, delta, tempC;
    int i, k;

    do
    {
        printf("Podaj temeprature poczatkowa w stopnniach Farenheita:\n ");
        k = scanf("%lf", &tempPocz);
        if(k==0) printf("Podano niepoprawna wartosc\n");
        while((i=getchar())!='\n' && i!=EOF);
    }
    while(k==0);

    do
    {
        printf("Podaj temeprature koncowa w stopnniach Farenheita:\n ");
        k = scanf("%lf", &tempKon);
        if(k==0) printf("Podano niepoprawna wartosc\n");
        if(tempKon<tempPocz) printf("Podano niepoprawna wartosc\n");
        while((i=getchar())!='\n' && i!=EOF);
    }
    while(k==0||tempKon<tempPocz);
    // Nie wiem co to skok tablicowania
    getchar();
    return 0;
}