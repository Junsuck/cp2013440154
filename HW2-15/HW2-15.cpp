#include <stdio.h>
int main (){
int a ,b=58,n=0;
while(1){
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%d",&a);
	n=n+1;
	if (n ==10)
		break;
	else if (a > b){
		printf("�Է��Ͻ� ���ں��� �۽��ϴ�.\n");
	}
	else if (a < b){
		printf("�Է��Ͻ� ���ں��� Ů�ϴ�.\n");
	}
	else
		break;
}
if(n==10)
printf("Game Over!!!!!!!!!!!!!!!!!!!!\n");
else
printf("�����Դϴ�!\n");
return 0 ;
}