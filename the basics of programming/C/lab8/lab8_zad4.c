//4. Napisa� program wczytuj�cy z klawiatury 8 - elementow� tablic� liczb typu double, nast�pnie
//obliczaj�cy
// a) sumy element�w dodatnich i ujemnych,,
// b) sum� element�w o warto�ciach nale��cych do przedzia�u [a ,b] , granice przedzia�u
//[a ,b] , nale�y wczyta� z klawiatury z zabezpieczeniem formatu i przy spe�nieniu warunku a<b,
// c) sum� element�w, kt�rych indeksy nale�� do zadanego przedzia�u indeks�w [ind1 ,ind2] ,
//indeksy nale�y wczyta� z klawiatury z zabezpieczeniem formatu i spe�niaj�ce warunki ind1?0
//ind2?0 oraz ind1?7 i ind2?7 .

#include <stdio.h> 

int main(){
    int i;
    double tablica[8],sumaD=0,sumaU=0,sumaGranica=0,sumaGranica2=0;
    int a,b,ind1,ind2;

    do{
        printf("Podaj granice a: ");
        scanf("%d",&a);
        fflush(stdin);
    }while(a<0);

    do{
        printf("Podaj granice b: ");
        scanf("%d",&b);
        if(a>b) printf("\nA nie moze byc wieksze od B");
        fflush(stdin);
    }while(b<a);
    
    do{
        printf("Podaj granice ind1: ");
        scanf("%d",&ind1);
        fflush(stdin);
    }while(ind1<0||ind1>7);

    do{
        printf("Podaj granice ind2: ");
        scanf("%d",&ind2);
        
        fflush(stdin);
    }while(ind2<0||ind2>7);

    for(i=0;i<8;i++){
         printf("\nPodaj tab[%d]: ",i);
        scanf("%lf",&tablica[i]);
    }
    
    for(i=0;i<8;i++){
    if(tablica[i]>0) sumaD += tablica[i];
    }
    for(i=0;i<8;i++){
    if(tablica[i]<0) sumaU += tablica[i];
    }
    for(i=a;i<b;i++){
        sumaGranica += tablica[i];
    }
    for(i=ind1;i<ind2;i++){
        sumaGranica2 += tablica[i];
    }
    printf("\nSuma dodatnich to: %lf",sumaD);
    printf("\nSuma ujemnych to: %lf",sumaU);
    printf("\nSuma z przedzialu [a,b] to: %lf",sumaGranica);
    printf("\nSuma z przedzialu [ind1,ind2] to: %lf",sumaGranica2);
}
