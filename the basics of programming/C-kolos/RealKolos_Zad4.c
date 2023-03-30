#include <stdio.h>

int main(){
    int N,i,k,j,temp;
    do{
        printf("Podaj wielkosc tablicy: ");
        k = scanf("%d",&N);
        fflush(stdin);
    }while(k==0||N<0);
    int x[N][N];
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            do{
            printf("Podaj x[%d][%d]: ",i,j);
            k = scanf("%d",&x[j][i]);
            fflush(stdin);
            }while(k==0);
        }
    }
    for(i=0;i<N;i++){
        printf("\n");
        for(j=0;j<N;j++){
            printf(" %d ",x[i][j]);
            
        }
    }
    for(i=0;i<1;i++){
        
        for(j=0;j<N;j++){
            if(i<j){
            temp = x[j][i];
            x[j][i] = x[i][j];
            x[i][j] = temp;
            }
        }
    }
    printf("\n");
    for(i=0;i<N;i++){
        printf("\n");
        for(j=0;j<N;j++){
            printf(" %d ",x[i][j]);
            
        }
    }
    getchar();
    return 0;
}