#include <stdio.h>
int main (){
int a,b=0 ;
while(1){
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d",&a);
	if(a > b)
		b = a;
	else if(a == 0)
		break;
}
	printf("The biggest number is %d\n",b);
return 0 ;
}