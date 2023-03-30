#include <stdio.h>

int main(void){
	srand(time(NULL));
	int tablica[10],zmiennaSortowania;
	int i,j;
	for(i=0;i<10;i++){
		tablica[i]=rand()%20;
	}
	for(i=0;i<10;i++){
		if(i==0) printf("{");
		if(i<9)  printf("%d, ",tablica[i]);
		if(i==9) printf("%d",tablica[i]);
		if(i==9) printf("}\n");		
	}
	for (i = 0; i<10-1; i++)
        {
		for (j=0; j<10-1-i; j++)
		{
			if (tablica[j] < tablica[j+1])
			{
				zmiennaSortowania = tablica[j]; 
				tablica[j] = tablica[j+1];
				tablica[j+1] = zmiennaSortowania;
			}
		}
        }
	for(i=0;i<10;i++){
		if(i==0) printf("{");
		if(i<9)  printf("%d, ",tablica[i]);
		if(i==9) printf("%d",tablica[i]);
		if(i==9) printf("}");		
	}
	
}
