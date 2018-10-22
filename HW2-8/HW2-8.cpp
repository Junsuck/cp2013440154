#include <stdio.h>
int main (){
	int a;
	printf("정수를 입력하세요: ");
	scanf("%d",&a);

	if ( a < 10) {
	printf("%d ",a*1);
	printf("%d ",a*2);
	printf("%d ",a*3);
	printf("%d ",a*4);
	printf("%d ",a*5);
	printf("%d ",a*6);
	printf("%d ",a*7);
	printf("%d ",a*8);
	printf("%d \n",a*9);
	}
	
	return 0 ;
}