#include <stdio.h>

int main(){
    srand(time(NULL));
    int wymiar,i,j,kolumna1,kolumna2,temp,k=0;
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
    printf("\nKtore kolumny chcesz zamienic:\n ");
    scanf("%d",&kolumna1); //1
    scanf("%d",&kolumna2); //2
    for(i=0;i<wymiar;i++){
        printf("\n");
        for(j=0;j<wymiar;j++){
            if(k<wymiar){
            temp = tab[j][kolumna1]; // x = y
            tab[j][kolumna1] = tab[j][kolumna2]; //y = z 
            tab[j][kolumna2] = temp; //z = x
            k++;
            }
            printf(" %d ",tab[i][j]);
        }
    }
}