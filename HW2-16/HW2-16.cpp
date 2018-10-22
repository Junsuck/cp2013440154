#include <stdio.h>
int main (){
int a;
while(1){
printf("정수를 입력하시오 :");
scanf("%d",&a);
if (a <10)
	printf("출력 :1\n");
else if (a <100)
	printf("출력 :2\n");
else if (a <1000)
	printf("출력 :3\n");
else if (a <10000)
	printf("출력 :4\n");
else if (a <100000)
	printf("출력 :5\n");
else if (a <1000000)
	printf("출력 :6\n");
else if (a <10000000)
	printf("출력 :7\n");
else if (a <100000000)
	printf("출력 :8\n");
else if (a <1000000000)
	printf("출력 :9\n");
}
return 0 ;
}