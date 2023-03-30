#include <stdio.h>
int main(void){
	int i,j=0,zmiennaSortowania,iloscParzystych=0,iloscNieparzystych=0;
	double mediana;
	int tablica[10]={0,2,5,4,2,3,5,5,4,1};
	//int tablica[9]={0,0,5,1,2,3,5,5,4};
	int n = 10;
	for (i = 0; i<n; i++)
        {
		for (j=0; j<n; j++)
		{
			if(tablica[j]>tablica[j+1]){
				zmiennaSortowania = tablica[j];
				tablica[j] = tablica[j+1];
				tablica[j+1] = zmiennaSortowania;
			}		
		}
    }
    printf("tablica[(n/2)-1] = %d\n",tablica[(n/2)-1]);
    printf("tablica[(n/2)] = %d\n",tablica[n/2]);
	if(n%2==0){
	mediana = (tablica[(n/2)-1]+tablica[n/2])/2.0;
	}
	else mediana = tablica[n/2];
	
	for(i=0;i<n;i++){
		if(i==0) printf("{");
		if(i<n-1)  printf("%d, ",tablica[i]);
		if(i==n-1) printf("%d",tablica[i]);
		if(i==n-1) printf("}\n");		
	}
	
	printf("Mediana = %lf",mediana);

	

}
