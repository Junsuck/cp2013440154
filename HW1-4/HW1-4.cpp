#include <stdio.h>;
int main(){
	int a;
	printf("점수를 입력하시오 : ");
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