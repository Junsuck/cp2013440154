#include <stdio.h>
int main (){
int sum = 0,a = 3;
while(a<=100){
	sum = sum + a;
	a = a+3;
}
printf("รัวี : %d\n",sum);
return 0 ;
}