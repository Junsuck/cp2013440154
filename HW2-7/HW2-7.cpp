#include <stdio.h>
int main (){
	int a,sum = 0;
	while(1){
		printf("������ �Է��ϼ���: ");
		scanf("%d",&a);
		if(a != 0) 
			sum = sum + a;
		else if(a == 0)
			break;
	}
	printf("���� : %d\n",sum);


	return 0 ;
}