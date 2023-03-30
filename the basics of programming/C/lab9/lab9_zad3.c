#include <stdio.h>

int main(void){
	double tablica[10]={9,5,-2,7,-4,15,-20,100,13,12};
	int i,j,k,p,zmiennaSortowania;
	
	
	for(i=0;i<10;i++){
		if(i==0) printf("{");
		if(i<9)  printf("%0.0lf, ",tablica[i]);
		if(i==9) printf("%0.0lf",tablica[i]);
		if(i==9) printf("}\n");		
	}

	for(i=0;i<10;i++){
		zmiennaSortowania=tablica[i]; //x = 3
		k=i;
		for(j=i+1;j<10;j++){
			if(tablica[j]<zmiennaSortowania){  //3>2
				zmiennaSortowania=tablica[j]; // 3 = 2 
				k=j; // 2 = x
			}
		}
		if(k!=i){
				p=tablica[i];
				tablica[i]=tablica[k];
				tablica[k]=p;
			}
	}
	
        
	for(i=0;i<10;i++){
		if(i==0) printf("{");
		if(i<9)  printf("%0.0lf, ",tablica[i]);
		if(i==9) printf("%0.0lf",tablica[i]);
		if(i==9) printf("}");		
	}
	
}
