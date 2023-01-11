//4. Napisać program, który sprawdzi czy dana liczba jest liczbą doskonałą ( liczba doskonała to
//liczba równa sumie swoich dodatnich podzielników z wyłączeniem samej liczby).
#include<stdio.h>

int main(){
    int liczbDosk,sprawdzLiczbDosk=0;
    int a,b,i,j=0;
    int podzielniki[1000];
    int dzielnik;

    printf("Podaj liczbe: ");
    scanf("%d", &liczbDosk);
     


    for(i=1;i<liczbDosk;i++){
        if(liczbDosk%i==0){
        podzielniki[j]=i;
        printf("Podzielniki = %d\n",i);
        j++;
        }
    }

    
    for(i=0;i<j;i++){
        sprawdzLiczbDosk = sprawdzLiczbDosk + podzielniki[i];
        }
    
    if(sprawdzLiczbDosk==liczbDosk) printf("\nPodana liczba jest doskonala");
    else printf("\nPodana liczba nie jest doskonala");
    return 0;
}