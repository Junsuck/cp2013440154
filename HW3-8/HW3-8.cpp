//���� �迭�� �ִ밪�� ��ȯ�ϴ� �Լ�
#include <stdio.h>
//�Լ��̸� findMax()
//�Է� : �迭
//��� : ���� �� ��� �� �ִ밪
//�μ�ȿ��: ����

int findMax( int arr[], int length){
	int index = 0, max = 0;
		while( index < length ){
		if( arr[index] > max)
			max = arr[index];
		index = index + 1;
	}
		printf("%d\n",max);
		return max;
}

int main(){
	int a[4] = {10, 20, 30 ,40};
	int length = 4;

	findMax( a,length );


	return 0;
}