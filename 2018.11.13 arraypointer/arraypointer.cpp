#include <stdio.h>
//printArray
//입력 : 배열
//출력 : 없음
//부수효과 : 화면에 배열의 값을 출력

//void printArray(int arr[], int len){ // 앞으로 배열을 함수에 전달할 경우 밑과 같은 문법을 많이 사용한다.
void printArray(int* arr, int len){ // 위와 같은 기능이지만 배열을 함수로 넘길때 포인터 변수를 많이 사용한다. 
	for(int index = 0; index < len; index++){
		printf("array[%d] = %d \n", index, arr[index]);
	}
}
int main() {
	int a[3] = {10, 20, 30};//배열의 선언 : 배열이름: a, 배열길이: 3
	int* ptr;

	//a = ptr; // -->error WHY? 배열의 이름(a)은 값만 가지고 있다. 즉 rvalue이다.
	//10 = a[2]; //error 위와 같은 이유

	printArray(a,3);

	return 0;
}