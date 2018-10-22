#include <stdio.h>
int main (){
int a ,b=58,n=0;
while(1){
	printf("숫자를 입력하시오 :");
	scanf("%d",&a);
	n=n+1;
	if (n ==10)
		break;
	else if (a > b){
		printf("입력하신 숫자보다 작습니다.\n");
	}
	else if (a < b){
		printf("입력하신 숫자보다 큽니다.\n");
	}
	else
		break;
}
if(n==10)
printf("Game Over!!!!!!!!!!!!!!!!!!!!\n");
else
printf("정답입니다!\n");
return 0 ;
}