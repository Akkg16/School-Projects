#include<iostream>
int main()
{
double x;
printf("Podaj liczbe; ");
scanf("%lf",&x);
if(x>=0)printf("Liczba jest nieujemna \n %lf",x);
else
printf("Liczba jest ujemna \n %lf",x);
getchar();
return 0;
}
