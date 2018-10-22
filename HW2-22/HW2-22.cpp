#include <stdio.h>
int main (){
int a = 1 ,i = 0;

printf("사용자 입력\n");
while(a != 0){
printf("");
scanf("%d",&a);
if(a > i)
	i = a;
}
printf("결과 :%d\n",i);
return 0 ;
}