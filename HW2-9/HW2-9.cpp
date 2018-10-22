#include <stdio.h>
int main (){
	int a;

	while(1) {
		printf("정수를 입력하세요: ");
		scanf("%d",&a);
		if (a >= 10){
			printf("10보다 작은 정수를 입력하시오.\n");
			continue;
		}
		else if ( a < 10) {
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
	}
	return 0 ;
}