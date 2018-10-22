#include <stdio.h>
int main (){
int a ,i;
int count=0,sum=0 ;
printf("정수를 입력하시오 :");
scanf("%d",&a);
while(a>1){
i = 1;count = 0;
while(a>i){
	if(a%i == 0){
		count = count + 1;
		i = i + 1;
	}
	else if(a % i != 0)
		i = i + 1;
}
if (count == 1){
	printf("%d\n",a);
	sum = sum + a;
}
	a = a-1;
}

printf("총합 :%d\n",sum);


return 0 ;
}