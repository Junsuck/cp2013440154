#include <stdio.h>
int main (){
	int a,i=2;
	printf("������ �Է��ϼ���: ");
		scanf("%d",&a);
	while(1){
		if((a % i == 0) && (a > i)) {
			printf(" %d\n", i);
			i=i+1;
		}
		else if(a % i !=0)
			i = i + 1;
		else if(a == i)
			break;
	}

	return 0 ;
}