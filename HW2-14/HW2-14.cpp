#include <stdio.h>
int main (){
int a,sum = 0;
while(1){
printf("������ �Է��Ͻÿ� :");
scanf("%d",&a);
if (a < 7)
	printf("7 �̻��� ������ �Է����ֽÿ�.\n");
else
	break;
}
while(a >=7){
	sum = sum + a;
	a = a-1;
}
printf("���� :%d\n",sum);
return 0 ;
}