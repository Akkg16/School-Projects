// 4. Napisaæ program wyznaczaj¹cy w tablicy pozycjê drugiego wyst¹pienia elementu o zadanej
//wartoœci.

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
