#include <stdio.h>
int main (){
	int a,sum = 0;
	while(1){
		printf("정수를 입력하세요: ");
		scanf("%d",&a);
		if(a != 0) 
			sum = sum + a;
		else if(a == 0)
			break;
	}
	printf("총합 : %d\n",sum);


	return 0 ;
}