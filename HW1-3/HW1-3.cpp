#include <stdio.h>;
int main(){
	int a,b,c;
	printf("ù��° ������ �Է��Ͻÿ� : ");
	scanf("%d",&a);
	printf("�� ��° ������ �Է��Ͻÿ� : ");
	scanf("%d",&b);
	printf("����° ������ �Է��Ͻÿ� : ");
	scanf("%d",&c);

	if(a>=b && a>=c)
		printf("The biggest number is %d\n",a);
	else if(b>=a && b>=c)
		printf("The biggest number is %d\n",b);
	else
		printf("The biggest number is %d\n",c);

return 0;
}