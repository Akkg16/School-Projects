// 4. Napisa� program wyznaczaj�cy w tablicy pozycj� drugiego wyst�pienia elementu o zadanej
//warto�ci.

#include <stdio.h>

int main(void){
	double tablica[10]={0,0,5,1,2,3,5,5,4,1};
	int i,j,k,p,zmiennaSortowania;
	
	
	for(i=0;i<10;i++){
		if(i==0) printf("{");
		if(i<9)  printf("%lf, ",tablica[i]);
		if(i==9) printf("%lf",tablica[i]);
		if(i==9) printf("}\n");		
	}
	
	


	
        

}
