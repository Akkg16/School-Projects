#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main()
{
	double a,b,c,x1=0,delta,x2=0,p,sprx1,sprx2;
	int k;
	
	do
	{
	printf("\nPodaj wspolczynnik a: ");
	k = scanf("%lf",&a);
	if(k==0) printf("\nBlad formatu");
	fflush(stdin);
	}
	while(k==0);

	do
	{
	printf("\nPodaj wspolczynnik b: ");
	k = scanf("%lf",&b);
	if(k==0) printf("\nBlad formatu");
	fflush(stdin);
	}
	while(k==0);
	
	do
	{
	printf("\nPodaj wspolczynnik c: ");
	k = scanf("%lf",&c);
	if(k==0) printf("\nBlad formatu");
	fflush(stdin);
	}
	while(k==0);
	
	printf("a=%lf,b=%lf,c=%lf",a,b,c);
	
	if(a==0&&b==0&&c==0)
	{
	printf("Tozsamosc");
	getchar();
	return 0;
	}
	
	if(a==0&&b==0&&c!=0)
	{
		printf("\nSprzecznosc");
		getchar();
		return 0;
	}
	if(a==0)
	{
	printf("\nRownanie liniowe");
	x1 = c/b;
	printf("\nx=%lf",x1);
	getchar();
	return 0;
	}
	
	delta = b*b - 4*a*c;
	printf("\ndelta: ",delta);

	if(delta==0)
	{
		printf("\nPierwiastek podwojny ");
		x1 = -b/(2*a);
		printf("x1 = %lf",x1);
		getchar();
		return 0;
	 }
	if(delta>0);
	{
		p=sqrt(delta);
		x1=(-b+p)/(2*a);
		x2=(-b-p)/(2*a);
		printf("\nx1 = %lf",x1);
		printf("\nx2 = %lf",x2);
		sprx1 = a*a*x2 + b * x2 + c;
		sprx2 = a*a*x2 + b * x2 + c;
		printf("\nsprawdzenie x1 = %lf",sprx1);
		printf("\nsprawdzenie x2 = %lf",sprx2);
		}	
	getchar();
	return 0;

}
