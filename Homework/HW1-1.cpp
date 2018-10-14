#include <stdio.h>
int main(){
	int a,b;
	printf("첫번째 정수를 입력하시오: ");
	scanf("%d",&a);
	printf("두번째 정수를 입력하시오: ");
	scanf("%d",&b);

	if (a > b)
		printf("The bigger number is %d.\n",a);
	else if (a < b)
		printf("The bigger number is %d.\n",b);
	else
		printf("The two numbers are same %d.\n",a);

	return 0;
}