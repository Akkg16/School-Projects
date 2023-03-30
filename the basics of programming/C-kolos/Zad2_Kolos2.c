#include <stdio.h>

int main(void){
    int i,n,k,j=0;
    int max=0,min=0;
    //Wczytywanie wielkosci tablicy
    do{
        printf("\nPodaj parzysta wielkosc tablicy: ");
        scanf("%d",&n);
        if(n==0) printf("\nPodaj wartosc rozna od zera ");
        fflush(stdin);
    }while(n<=0||n%2!=0);
    //Wypelnianie glownej tablicy
    int x[n];
    for(i=0;i<n;i++){
        printf("\nPodaj x[%d]: ",i);
        scanf("%d",&x[i]);
    }
    //Drukowanie glownej
    for(i=0;i<n;i++){
        if(i==0) printf("\nGlowna tablica = {%d,",x[i]);
        if(i>0&&i<n-1) printf("%d,",x[i]);
        if(i==n-1) printf("%d}",x[i]);
    }
    //Inicjalizacja polowek xMin i xMax tablicy glownej
    int xMin[n/2];
    int xMax[n/2];
    ////Uzupelnianie tablicy xMin elementami z tablicy glownej 
    for(i=0;i<n/2;i++){
        xMin[i] = x[i];
    }
    //Drukowanie xMin
    for(i=0;i<n/2;i++){
        if(i==0) printf("\nPierwsza polowa glownej tablicy = {%d,",xMin[i]);
        if(i>0&&i<(n/2)-1) printf("%d,",xMin[i]);
        if(i==(n/2)-1) printf("%d}",xMin[i]);
    }
    //Uzupelnianie tablicy xMax elementami z tablicy glownej 
    for(i=n/2;i<n;i++){
        xMax[j] = x[i];
        j++;
    }
    //Drukowanie tablicy xMax
    for(i=0;i<n/2;i++){
        if(i==0) printf("\nDruga polowa glownej tablicy = {%d,",xMax[i]);
        if(i>0&&i<(n/2)-1) printf("%d,",xMax[i]);
        if(i==(n/2)-1) printf("%d}",xMax[i]);
    }
    //Szukanie min i max oraz drukowanie tych wartosci
    min=xMin[0];
    for(i=0;i<n/2;i++){
        if(i==n/2-1) break;
        if(xMin[i+1]<min) min=xMin[i+1];
    }
    printf("\nMin = %d",min);

    max=xMax[0];
    for(i=0;i<n/2;i++){
        if(i==n/2-1) break;
        if(xMax[i+1]>max) max=xMax[i+1];
    }
    printf("\nMax = %d",max);
}