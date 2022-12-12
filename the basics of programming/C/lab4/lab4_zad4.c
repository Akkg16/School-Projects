#include <stdio.h>
#include <math.h>


int main(){
	int n,k,licznik=0,i,a,b,roznica,roznicamax=0;
	
	do{
		printf("\nPodaj liczbe powtorzen: ");
		k = scanf("%d",&n);
		if(k==0) printf("Blad formatu");
		if(k==1&&n<=0) printf("N nie moze byc ujemne");
		fflush(stdin);
	}while(k==0||n<=0);
	printf("n=%d",n);

	for(i=0;i<n;i++)
	{
		
		printf("\nPodaj liczbe ktora chcesz wczytac: ");
		scanf("%d",&a);
		roznica = fabs(a-b);
		if(roznica>roznicamax) roznicamax=roznica;
		b = a;
		if(i>0) printf("\nroznica = %d",roznica);
		
	
	}
	printf("\nroznica maksymalna to %d",roznicamax);
}
