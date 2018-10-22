#include <stdio.h>
int main (){
int a = 11 , b = 5;
int fixa = 11, fixb = 5;
while(fixa > 0){
	while(a > 0){
		printf("*");
		a = a - 1;
	}
printf(" ");
while(b >= 0){
	printf("%d",b);
	b=b-1;
}
while( b <= fixb - 2){
	printf("%d",b+2);
	b = b + 1;
}
printf("\n");
fixa = fixa - 2;
fixb = fixb - 1;
a = fixa;
b = fixb;
}

int c = 9 , d = 1;
int fixc = 9, fixd = 1;
while(fixc > 0){
	while(c <= 11){
		printf("*");
		c = c + 1;
	}
printf(" ");
while(d >= 0){
	printf("%d",d);
	d = d-1;
}
while( d < fixd - 1){
	d = d + 1;
	printf("%d",d + 1);
}
printf("\n");
fixc = fixc - 2;
fixd = fixd + 1;
c = fixc;
d = fixd;
}

return 0 ;
}