#include <stdio.h>

int main(void){
    int i,sumowanieTablicy,n;
    n = 6;
    int tablica[n];
    wczytywanieTablicy(tablica,n);
    sumowanieTablicy = sumujTablice(tablica,n);

    printf("Suma tablicy to: %d",sumowanieTablicy);

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
