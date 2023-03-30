#include <stdio.h>
#define N 10
int main(void){
    
    int i,temp=0,j=N/2;
    double y[N]={2,3,5,10,51,21,13,31,12,11};
    
    for(i=0;i<N;i++){
        if(i==0) printf("\nPrzed zamiana = {%0.0lf,",y[i]);
        if(i>0&&i<N-1) printf("%0.0lf,",y[i]);
        if(i==N-1) printf("%0.0lf}",y[i]);
    }
    //2 3 5 10 51
    //21 13 31 12 11
    for(i=0;i<N/2;i++){
        temp = y[i];
        y[i] = y[j]; 
        y[j] = temp;
        j++;
    }
    
    for(i=0;i<N;i++){
        if(i==0) printf("\nPo zamianie = {%0.0lf,",y[i]);
        if(i>0&&i<N-1) printf("%0.0lf,",y[i]);
        if(i==N-1) printf("%0.0lf}",y[i]);
    }
}