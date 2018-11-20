#include <stdio.h>
//printArray
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 배열의 값을 출력
void printArray(int* arr, int len){ 
	for(int index = 0; index < len; index++)
		printf("array[%d] = %d\n", index, arr[index]);
}

//함수: findMinindex()
//입력: 배열(배열이름,배열길이)
//출력: 최소값의 인덱스
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

//함수: swapElement()
//입력:배열,두개의 인덱스
//출력:없음



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
}//-->다음주 퀴즈