#include <stdio.h>
int main (){
int a,sum = 0;
while(1){
printf("정수를 입력하시오 :");
scanf("%d",&a);
if (a < 7)
	printf("7 이상의 정수를 입력해주시오.\n");
else
	break;
}
while(a >=7){
	sum = sum + a;
	a = a-1;
}
printf("총합 :%d\n",sum);
return 0 ;
}