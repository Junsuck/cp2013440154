#include <stdio.h>
int main (){
	int a;
	while(1){
		printf("정수를 입력하세요: ");
		scanf("%d",&a);
		if(a > 0) 
			break;
		else if(a <= 0){
			printf("입력한 정수가 0보다 작습니다. 다시 입력해주세요.\n");
			continue;}
	}
	printf("출력 : %d\n",2*a);


	return 0 ;
}