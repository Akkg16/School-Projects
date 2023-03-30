#include <stdio.h>

int main(){
	int i,j,k;
	int x[2][4];
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			do{
				printf("\nPodaj x[%d][%d]: ",i,j);
				k = scanf("%d",&x[i][j]);
				fflush(stdin);
			}while(k==0);
		}
	}
	for(i=0;i<2;i++){
		printf("\n");
		printf("[ ");
		for(j=0;j<4;j++){
			printf("%d ",x[i][j]);
		}
		printf("]");
}
}

