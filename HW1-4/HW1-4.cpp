#include <stdio.h>;
int main(){
	int a;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d",&a);

	if(a>=80)
		printf("The score is 'A'\n");
	else if (a>=60)
		printf("The score is 'B'\n");
	else if (a>=40)
		printf("The score is 'C'\n");
	else if (a>=20)
		printf("The score is 'D'\n");
	else
		printf("The score is 'E'\n");
return 0;
}