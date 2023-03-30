#include <stdio.h>

int main(){
    srand(time(NULL));
    int wymiar,i,j,wiersz1,wiersz2,temp,k=0;
    printf("Podaj wymiar tablicy : ");
    scanf("%d",&wymiar);
    int tab[wymiar][wymiar];
    for(i=0;i<wymiar;i++){
        printf("\n");
        for(j=0;j<wymiar;j++){
            tab[i][j]=rand()%9;
            printf(" %d ",tab[i][j]);
        }
    }
    printf("\nKtore wiersze chcesz zamienic:\n ");
    scanf("%d",&wiersz1); //1
    scanf("%d",&wiersz2); //2
    for(i=0;i<wymiar;i++){
        printf("\n");
        for(j=0;j<wymiar;j++){
            if(k<wymiar){
            temp = tab[wiersz1][j]; // x = y
            tab[wiersz1][j] = tab[wiersz2][j]; //y = z 
            tab[wiersz2][j] = temp; //z = x
            k++;
            }
            printf(" %d ",tab[i][j]);
        }
    }
}