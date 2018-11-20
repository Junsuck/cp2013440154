#include <stdio.h>

int findMin(int* arr, int length){
	int min = arr[0];
	for(int count = 1; count<length;count++){
		if(min > arr[count])
			min = arr[count];
	}
	printf("%d\n",min);
	return min;
}

int findMinindex(int* arr, int length, int start){
	int min = arr[start];
	int minindex;
	for(int count =start + 1; count<length;count++){
		if(min > arr[count])
			min = arr[count];
			minindex = count;
	}
	printf("%d\n",minindex);
	return minindex;
}

void swapElement(int* arr, int i, int j){
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void printArray(int* arr, int len){ 
	for(int index = 0; index < len; index++){
		printf("array[%d] = %d\n", index, arr[index]);
	}
}


int main() {
	int a[] = {30, 35, 27, 15, 40};
	findMinindex(a,5,0);

	printArray(a,5);

	return 0;
}