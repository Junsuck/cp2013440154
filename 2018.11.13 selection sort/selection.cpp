#include <stdio.h>
//printArray
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 배열의 값을 출력
void printArray(int* arr, int len){ 
	for(int index = 0; index < len; index++){
		printf("array[%d] = %d\n", index, arr[index]);
	}
}

//함수: findMinindex()
//입력: 배열(배열이름,배열길이)
//출력: 최소값의 인덱스
int findMinindex(int* arr,int length){
	int minindex = 0;
	for(int count = 1; count<length;count++){
		if(arr[minindex] > arr[count])
			minindex = count;
	}

	return minindex;
}

//함수: swapElement()
//입력:배열,


void swapElement(int* arr, int i, int j){
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

//함수: findMin()
//입력: 배열(배열이름, 배열길이)
//출력: 배열 최소값
int findMin(int* arr, int length){
	int min = arr[0];
	for(int count = 1; count<length;count++){
		if(min > arr[count])
			min = arr[count];
	}

	return min;
}

//함수: seletionSort()
//입력: 배열
//출력: 없음
//부수효과: 배열이 정렬
//homework -->findmin에 변수가 하나 더 필요함.
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
}//-->다음주 퀴즈