#include <stdio.h>

int main(void){
    int i,n=0;
    do{
        printf("Podaj parzysta liczbe elementow tablicy: ");
        scanf("%d",&n);
        fflush(stdin);
    }while(n%2!=0||n<=0);
    int x[n];
    int y[n/2];
    for(i=0;i<n;i++){
    printf("Podaj tab[%d]: ",i);
    scanf("%d",&x[i]);
    }
    
    for(i=0;i<(n/2);i++){
        y[i] = x[i*2];
    }
    for(i=0;i<n;i++){
        printf("\nx[%d]: %d",i,x[i]);
    }
    for(i=0;i<(n/2);i++){
        printf("\ny[%d]: %d",i,y[i]);
    }
}