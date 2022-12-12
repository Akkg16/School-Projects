#include <stdio.h>
int main()
{
	int x=2, i=1;
	do
	{
		printf("\n %d liczba nr %d",x,i);
		x=x+2;
		i = i+1;
	}
	while(i<21);
	getchar();
	return 0;
}
