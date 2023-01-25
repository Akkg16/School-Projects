#include <stdio.h>

int main(void){
    int i,sumowanieTablicy,elementyParzyste,elementyNieparzyste,n;
    n = 6;
    int tablica[n];
    wczytywanieTablicy(tablica,n);
    sumowanieTablicy = sumujTablice(tablica,n);
    elementyParzyste = sumujElementyParzysteTablicy(tablica,n);
    elementyNieparzyste = sumujElementyNieparzysteTablicy(tablica,n);
    printf("Suma tablicy to: %d",sumowanieTablicy);
    printf("\nSuma nieparzystych elementow tablicy to: %d",elementyNieparzyste);
    printf("\nSuma parzystych elementow tablicy to: %d",elementyParzyste);
    getchar();
    return 0;
}
int wczytywanieTablicy(int tablica[],int rozmiarTablicy){
    int i, suma=0;
    for(i=0;i<rozmiarTablicy;i++){
        printf("\nPodaj tab[%d]: ",i);
        scanf("%d",&tablica[i]);
        suma += tablica[i];
    }
    return suma;
}

int sumujTablice(int tablica[], int rozmiarTablicy){
    int i,suma=0;
    for(i=0;i<rozmiarTablicy;i++){
        suma += tablica[i];
    }
    return suma;
}

int sumujElementyParzysteTablicy(int tablica[], int rozmiarTablicy){
    int i,suma=0;
    for(i=0;i<rozmiarTablicy;i++){
        if(tablica[i]%2==0) suma += tablica[i];
    }
    return suma;
}

int sumujElementyNieparzysteTablicy(int tablica[], int rozmiarTablicy){
    int i,suma=0;
    for(i=0;i<rozmiarTablicy;i++){
        if(tablica[i]%2!=0) suma += tablica[i];
    }
    return suma;
}
