#include <stdio.h>
int main (){
int a,i=0;
int count = 0;
printf("������ �Է��Ͻÿ� :");
scanf("%d",&a);
while(a>i){
	i=i+1;
	if (a%i == 0)
		count = count + 1;
}
if (count <= 2)
	printf("���� %d�� �Ҽ��Դϴ�.\n",a);
else
	printf("���� %d�� �Ҽ��� �ƴմϴ�.\n",a);
return 0 ;
}