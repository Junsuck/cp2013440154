#include <stdio.h>;
int main(){
	int a,b,c;
	printf("첫번째 정수를 입력하시오 : ");
	scanf("%d",&a);
	printf("두 번째 정수를 입력하시오 : ");
	scanf("%d",&b);
	printf("세번째 정수를 입력하시오 : ");
	scanf("%d",&c);

	if(a>=b && a>=c)
		printf("The biggest number is %d\n",a);
	else if(b>=a && b>=c)
		printf("The biggest number is %d\n",b);
	else
		printf("The biggest number is %d\n",c);

return 0;
}