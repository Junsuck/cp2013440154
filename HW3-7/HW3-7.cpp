//���� �迭�� ���� ��ȯ�ϴ� �Լ�
#include <stdio.h>
//�Լ��̸� addArray()
//�Է� : �迭
//��� : ���� �� ��ҵ��� ��
//�μ�ȿ��: ����
int addArray(int arr[],int length){
		int sum = 0, index = 0;
	while(index < length){
		sum += arr[index++]; // sum = sum + a[index++]�� �ǹ��Ѵ�.
		return sum;
}

int main(){
	int a[4] = {10, 20, 30 ,40};
	int length = 4;
	printf("%d\n",addArray(a,4));
//��а� �� �Ʒ��� �����ϼ���
	return 0;
}