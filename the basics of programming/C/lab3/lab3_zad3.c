#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main()
{
	double a,b,c,x1=0,delta=0,x2=0,p,sprx1,sprx2,xRe,xIm,z1,z2,sprRe,sprIm;
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
	printf("\ndelta: %lf",delta);

	if(delta==0)
	{
		printf("\nPierwiastek podwojny ");
		x1 = -b/(2*a);
		printf("x1 = %lf",x1);
		getchar();
		return 0;
	 }
	if(delta>0)
	{
		p=sqrt(delta);
		x1=(-b+p)/(2*a);
		x2=(-b-p)/(2*a);
		printf("\nx1 = %lf",x1);
		printf("\nx2 = %lf",x2);
		sprx1 = a*a*x2 + b * x2 + c;
		sprx2 = a*a*x2 + b * x2 + c;
		printf("\nsprawdzenie x1 = %15.12lf",sprx1);
		printf("\nsprawdzenie x2 = %15.12lf",sprx2);
		getchar();
		return 0;
	}
	if(delta<0)
	{
		xRe = -b/(2*a);
		xIm = sqrt(-delta)/(2*a);
		z1=(-b+sqrt(-delta))/(2*a);
		z2=(-b-sqrt(delta))/(2*a);
		printf("\nz1 = %lf %+f",xRe,xIm);
		printf("\nz2 = %lf %+f",xRe,-xIm);
		sprRe = a*xRe*xRe-a*xIm*xIm+b*xRe+c;
		sprIm = xIm*2*a*xRe+b*xIm;
		printf("\nSprRe = %15.12lf",sprRe);
		printf("\nSprIm = %15.12lf",sprIm);
		getchar();
		return 0;
	}
	getchar();
	return 0;
}
