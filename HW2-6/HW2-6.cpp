#include <stdio.h>
int main (){
	int a;
	while(1){
		printf("������ �Է��ϼ���: ");
		scanf("%d",&a);
		if(a > 0) 
			break;
		else if(a <= 0){
			printf("�Է��� ������ 0���� �۽��ϴ�. �ٽ� �Է����ּ���.\n");
			continue;}
	}
	printf("��� : %d\n",2*a);


	return 0 ;
}