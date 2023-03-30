#include <stdio.h>

int main(void){
	int tablica[6]={1,0,1,1,0,1};
	int n = 6,i,p,j;
	p=tablica[5];
	int przesuniecie = 2;
	for(j=0;j<przesuniecie;j++){
		for(i=n-2;i>=0;i--) tablica[i+1]=tablica[i];
		tablica[0]=0;
	}
	tablica[5]=p;
	for(i=0;i<n;i++){
		printf("\nTab[%d]=%d",i,tablica[i]);
	}
	
}

