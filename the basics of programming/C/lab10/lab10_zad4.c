#include <stdio.h>

int main(){
    int wymiar,i,j;
    printf("Podaj wymiar macierzy jednostkowej: ");
    scanf("%d",&wymiar);

    for(i=0;i<wymiar;i++){
        printf("\n");
        for(j=0;j<wymiar;j++){
            if(i==j) printf(" 1 ");
            else printf(" 0 ");
        }
    }
}