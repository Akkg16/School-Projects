#include <stdio.h>

int main(void){
	int i,j,temp;
	int x[3][3] = { {1,2,3}, {2,3,4}, {3,2,1}};
	for(i=0;i<3;i++){
		printf("\n");
		printf("[ ");
		for(j=0;j<3;j++){
			printf("%d ",x[i][j]);
		}
		printf("]");
	}	
    for(i=0;i<3;i++){
        for(j=1;j<3;j++){
            if(i>j){
            temp = x[i][j]; //
            x[i][j] = x[j][i];
            x[j][i] = temp;
            
            }
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
		printf("\n");
		printf("[ ");
		for(j=0;j<3;j++){
			printf("%d ",x[i][j]);
		}
		printf("]");
	}
}

