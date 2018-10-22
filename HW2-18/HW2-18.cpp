#include <stdio.h>
int main (){
int a,sum = 0;
for(a=1;a<=20;a++){
	sum = sum + a*5;
}
printf("5의 배수의 총합 :%d\n",sum);
return 0 ;
}