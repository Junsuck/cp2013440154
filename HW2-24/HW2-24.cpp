#include <stdio.h>
int main (){
int a , b;
int n = -1;
printf("정수를 입력하시오 :");
scanf("%d",&a);

b = a;
a = 1;
while( 2*b-1 > a){
	a = 1;
	n = n + 2;
	while(n >= a){
		printf("*");
		a = a + 1;
	}
	printf("\n");

}
return 0 ;
}