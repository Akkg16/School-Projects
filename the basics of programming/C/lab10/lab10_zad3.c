#include<stdio.h>
int main(void){
	int i,j,wiersz,kolumna,sumaWiersz=0,sumaKolumna=0;
	int x[3][3] = { {1,2,3}, {2,3,4}, {3,2,1}};
	for(i=0;i<3;i++){
		printf("\n");
		printf("[ ");
		for(j=0;j<3;j++){
			printf("%d ",x[i][j]);
		}
		printf("]");
	}	
    printf("\nKtory wiersz chcesz zsumowac[0,1,2]: ");
    scanf("%d",&wiersz);
    printf("\nKtora kolumne chcesz zsumowa[0,1,2]c: ");
    scanf("%d",&kolumna);

    for(j=0;j<3;j++){
        sumaWiersz = x[wiersz][j] + sumaWiersz;
    }
    printf("\nSuma wiersz: %d",sumaWiersz);

    for(i=0;i<3;i++){
        sumaKolumna = x[i][kolumna] + sumaKolumna;
    }
    printf("\nSuma kolumna: %d",sumaKolumna);
}



