#include <stdio.h>
//printArray
//�Է� : �迭
//��� : ����
//�μ�ȿ�� : ȭ�鿡 �迭�� ���� ���
void printArray(int* arr, int len){ 
	for(int index = 0; index < len; index++){
		printf("array[%d] = %d\n", index, arr[index]);
	}
}

//�Լ�: findMinindex()
//�Է�: �迭(�迭�̸�,�迭����)
//���: �ּҰ��� �ε���
int findMinindex(int* arr,int length){
	int minindex = 0;
	for(int count = 1; count<length;count++){
		if(arr[minindex] > arr[count])
			minindex = count;
	}

	return minindex;
}

//�Լ�: swapElement()
//�Է�:�迭,


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
	for(int count = 1; count<4;count++){
		
	}
}

int main() {
	int a[] = {30, 35, 27, 15, 40};

	printf("minimum value of the array is %d\n", findMin(a,5));
	printf("The index of the minimum value is %d\n", findMinindex(a,5));
	swapElement(a,0,3);
	printArray(a,5);

	return 0;
}//-->������ ����