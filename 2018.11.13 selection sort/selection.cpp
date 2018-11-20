#include <stdio.h>
//printArray
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : ȭ�鿡 �迭�� ���� ���
void printArray(int* arr, int len){ 
	for(int index = 0; index < len; index++)
		printf("array[%d] = %d\n", index, arr[index]);
}

//�Լ�: findMinindex()
//�Է�: �迭(�迭�̸�,�迭����)
//���: �ּҰ��� �ε���
int findMinindex(int* arr,int count, int length){
	int min = arr[count - 1];
	int minindex = count - 1;
	for(count ; count<length;count++){
		if(min > arr[count]){
			min = arr[count];
			minindex = count;
		}
	}
	return minindex;
}

//�Լ�: swapElement()
//�Է�:�迭,�ΰ��� �ε���
//���:����



void swapElement(int* arr, int i, int j){
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

//�Լ�: findMin()
//�Է�: �迭(�迭�̸�, �迭����)
//���: �迭 �ּҰ�
int findMin(int* arr, int length){
	int min = arr[0];
	for(int count = 1; count<length;count++){
		if(min > arr[count])
			min = arr[count];
	}
	return min;
}

//�Լ�: seletionSort()
//�Է�: �迭
//���: ����
//�μ�ȿ��: �迭�� ����
//homework -->findmin�� ������ �ϳ� �� �ʿ���.
void selectionSort(int* arr){
	for(int count=1;count<4;count++){
		int x = findMinindex(arr,count,5);
		swapElement(arr,count-1,x);
	}
	printArray(arr,5);
}

int main() {
	int a[] = {30, 35, 27, 15, 40};
	
	selectionSort(a);

	return 0;
}//-->������ ����