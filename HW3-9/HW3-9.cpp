//�迭�� �ִ밪�� �ε����� ��ȯ�ϴ� �Լ�
#include <stdio.h>
//�Լ��̸� findMax()
//�Է� : �迭
//��� : ���� �� ��� �� �ִ밪�� �ε���
//�μ�ȿ��: ����

int findMax( int arr[], int length ){
	int max = 0, index = 0, maxindex = 0;
	while( index < length){
		if( arr[index] > max ){
			max = arr[index];
			maxindex = index ;
		}
		index++;
	}
	printf("%d\n",maxindex);
	return maxindex;
}

int main(){
	int a[4] = {10, 30, 40 ,20};
	int length = 4;

	findMax( a, length);

	return 0;
}