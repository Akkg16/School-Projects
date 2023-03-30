#include <stdio.h>
#include <math.h>
int main(){
double x;
int k,z,c3,c2,c1,c0,c4,c5,c6,c7;
do{
	printf("\nPodaj liczbe: ");
	k = scanf("%lf",&x);
	if(k==0) printf("Blad formatu");
	if(k==1&&x<=0) printf("x nie moze byc ujemne");
	fflush(stdin);
}while(k==0||x<0||x>9999999);
z = x;
printf("z=%d",z);
c6=z/1000000;
z=z-c6*1000000;
c5=z/100000;
z=z-c5*100000;
c4=z/10000;
z=z-c4*10000;
if(c4<1) c4 = 0;
c3=z/1000; // 
z=z-c3*1000;
c2=z/100;
z=z-c2*100;
c1=z/10;
z=z-c1*10;
c0=z;
printf("\nliczby c6, c5, c4, c3, c2, c1, c0");
printf("\nliczby %d, %d, %d, %d, %d, %d, %d\n\n",c6,c5,c4,c3,c2,c1,c0);
switch (c6) {
case 1: printf("milion "); break;
case 2: printf("dwa miliony "); break;
case 3: printf("trzy miliony "); break;
case 4: printf("cztery miliony "); break;
case 5: printf("piec milionow "); break;
case 6: printf("szesc milionow "); break;
case 7: printf("siedem milionow "); break;
case 8: printf("osiem milionow "); break;
case 9: printf("dziewiec milionow "); break;
}
switch (c5) {
case 1: printf("sto "); break;
case 2: printf("dwiescie "); break;
case 3: printf("trzysta "); break;
case 4: printf("czterysta "); break;
case 5: printf("piecset "); break;
case 6: printf("szescset "); break;
case 7: printf("siedemset "); break;
case 8: printf("osiemset "); break;
case 9: printf("dziewiecset "); break;
}
switch(c4) {
  case 1:
    switch(c3) {
      case 0: printf("dziesiec "); break;
      case 1: printf("jedenascie "); break;
      case 2: printf("dwanascie "); break;
      case 3: printf("trzynascie "); break;
      case 4: printf("czternascie"); break;
      case 5: printf("pietnascie "); break;
      case 6: printf("szesnascie "); break;
      case 7: printf("osiemnascie "); break;
      case 8: printf("dziewietnascie "); break;
    }
    break;
  case 2: printf("dwadziescia "); break;
  case 3: printf("trzydziesci "); break;
  case 4: printf("czterdziesci "); break;
  case 5: printf("piecdziesiat "); break;
  case 6: printf("szczescdziesiat "); break;
  case 7: printf("siedemdziesiat "); break;
  case 8: printf("osiemdziesiat "); break;
  case 9: printf("dziewiedziesiat "); break;
}
if(c4 > 1) {
  switch(c3) {
    case 1: printf("jeden "); break;
    case 2: printf("dwa "); break;
    case 3: printf("trzy "); break;
    case 4: printf("cztery "); break;
    case 5: printf("piec "); break;
    case 6: printf("szesc "); break;
    case 7: printf("siedem "); break;
    case 8: printf("osiem "); break;
    case 9: printf("dziewiec "); break;
  }
}
if(c4 > 0.99 || c5 > 0.99) printf("tysiacy ");
if(c4==0&&c5==0&&c6==0&&c3!=0){
	switch(c3){
		case 1: printf("jeden "); break;
		case 2: printf("dwa "); break;
		case 3: printf("trzy "); break;
		case 4: printf("cztery "); break;
		case 5: printf("piec "); break;
		case 6: printf("szesc "); break;
		case 7: printf("siedem "); break;
		case 8: printf("osiem "); break;
		case 9: printf("dziewiec "); break;
		}
	if(c3==1) printf("tysiac ");
	if(c3==2||c3==3||c3==4) printf("tysiace ");
	if(c3==5||c3==6||c3==7||c3==8||c3==9) printf("tysiecy ");
}
	switch(c2){
		case 1: printf("sto "); break;
		case 2: printf("dwiescie "); break;
		case 3: printf("trzysta "); break;
		case 4: printf("czterysta "); break;
		case 5: printf("piecset "); break;
		case 6: printf("szescset "); break;
		case 7: printf("siedemset "); break;
		case 8: printf("osiemset "); break;
		case 9: printf("dziewiecset "); break;
	}
	switch(c1){
		case 1: 
			switch(c0){
				case 0: printf("dziesiec"); break;
				case 1: printf("jedenascie"); break;
				case 2: printf("dwanascie"); break;
				case 3: printf("trzynascie"); break;
				case 4: printf("czternascie"); break;
				case 5: printf("pietnascie"); break;
				case 6: printf("szesnascie"); break;
				case 7: printf("osiemnascie"); break;
				case 8: printf("dziewietnascie"); break;
			};break;
			case 2: printf("dwadziescia "); break;
			case 3: printf("trzydziesci "); break;
			case 4: printf("czterdziesci "); break;
			case 5: printf("piecdziesiat "); break;
			case 6: printf("szczescdziesiat "); break;
			case 7: printf("siedemdziesiat "); break;
			case 8: printf("osiemdziesiat "); break;
			case 9: printf("dziewiedziesiat "); break;
	}
	if(c1!=1){
		switch(c0){
			case 1: printf("jeden "); break;
			case 2: printf("dwa "); break;
			case 3: printf("trzy "); break;
			case 4: printf("cztery "); break;
			case 5: printf("piec "); break;
			case 6: printf("szesc "); break;
			case 7: printf("siedem "); break;
			case 8: printf("osiem "); break;
			case 9: printf("dziewiec "); break;
	}
	}
    
    switch(c0%10) {
    case 1: printf("zloty"); break;
    case 2:
    case 3:
    case 4: printf("zlote"); break;
    default: printf("zlotych");
}
	getchar();
	return 0;
}
