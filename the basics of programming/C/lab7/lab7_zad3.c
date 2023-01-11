//3. Napisaæ program, który wydrukuje sumê zadanej iloœci liczb [ 9 + 99 + 999 + 9999 ...].

#include <stdio.h>
#include <math.h>

int main(){
	
	
	int i, a,b,n,suma;
	printf("Podaj n plz: ");
	scanf("%d",&n);
	a = 9;
	b = 10;
	double tab[n];
	tab[0] = 9;
	
	for(i=0;i<n;i++)
	{
		tab[i+1]=tab[i]+pow(b,i+1)*a;
		printf("Tab = %lf\n",tab[i+1]);
	}
	
	for(i=0;i<n;i++){
		printf("Tab[%d] = %lf",i,tab[i]);
		printf("i = %d\n",i);
		suma = suma + tab[i];
		printf("Suma: %d\n",suma);
	}
	printf("Suma to: %d",suma);
	
	
	
	
	
	
	getchar();
	return 0;
}
