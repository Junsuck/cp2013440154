#include <stdio.h>
int main(){
	int a,b;
	printf("ù��° ������ �Է��Ͻÿ�: ");
	scanf("%d",&a);
	printf("�ι�° ������ �Է��Ͻÿ�: ");
	scanf("%d",&b);

	if (a > b)
		printf("The bigger number is %d.\n",a);
	else if (a < b)
		printf("The bigger number is %d.\n",b);
	else
		printf("The two numbers are same %d.\n",a);

	return 0;
}