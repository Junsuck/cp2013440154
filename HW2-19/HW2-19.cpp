#include <stdio.h>
int main (){
int a,i=0;
int count = 0;
printf("정수를 입력하시오 :");
scanf("%d",&a);
while(a>i){
	i=i+1;
	if (a%i == 0)
		count = count + 1;
}
if (count <= 2)
	printf("숫자 %d는 소수입니다.\n",a);
else
	printf("숫자 %d는 소수가 아닙니다.\n",a);
return 0 ;
}