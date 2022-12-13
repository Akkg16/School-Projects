#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double tempF, tempC;
    int i, k;
    do
    {
        printf("Podaj temeprature w stopnniach Farenheita w przedziale [20,300]: ");
        k = scanf("%lf", &tempF);
        if(k==0) printf("Podano niepoprawna wartosc\n");
        else if(tempF<20 || tempF>300) printf("Podano niepoprawna wartosc\n");
        while((i=getchar())!='\n' && i!=EOF);
    } while (k==0 || tempF<20 || tempF>300);
    tempC = (tempF-32)*5/9;
    printf("Temperatura w stopniach Celsjusza: %.2lf\n", tempC);
    getchar();
    return 0;
}