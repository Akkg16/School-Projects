#include<stdio.h>

int main(void){
    int tablicaDziesietna[5] = {0,1,2,3,4};
    int tablicaOktalna[5] = {0123, 0321, 0213, 0366, 0421};
    int tablicaSzesnastkowa[5] = {0x123, 0x321, 0x213, 0x366, 0x421};
    drukujTablice(tablicaDziesietna, 5);
    drukujTabliceOktalna(tablicaOktalna, 10);
    drukujTabliceSzesnastkowa(tablicaSzesnastkowa, 10);
}

int drukujTablice(int tablica[], int rozmiar){
    int i;
    printf("\n( ");
    for( i ; i < rozmiar; i++){
        printf(" %d", tablica[i]);
    }
    printf(" )");
}
int drukujTabliceOktalna(int tablica[], int rozmiar){
    int i;
    printf("\n( ");
    for( i ; i < rozmiar; i++){
        printf(" %o", tablica[i]);
    }
    printf(" )");
}
int drukujTabliceSzesnastkowa(int tablica[], int rozmiar){
    int i;
    printf("\n( ");
    for( i ; i < rozmiar; i++){
        printf(" %X", tablica[i]);
    }
    printf(" )");
}