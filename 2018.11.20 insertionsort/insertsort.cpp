#include <stdio.h>

void printArray(int* arr, int len){ 
	for(int index = 0; index < len; index++)
		printf("array[%d] = %d\n", index, arr[index]);
}

void swapElement(int* arr, int i, int j){
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void insertElement(int* arr, int ele){
	for (ele; ele != 0;ele--){
		if(arr[ele-1]>arr[ele])
			swapElement(arr,ele-1,ele);
		else break;
	}

}

void insertionSort(int* arr, int length){
	for( int index = 1; index < length; index++)
		insertElement(arr,index);
	printArray(arr,length);
}


int main() {
	int a[] = {37, 45, 42, 50, 40};
	insertionSort(a,5);
	return 0;
}