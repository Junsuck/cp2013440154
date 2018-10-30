//정수 배열의 합을 반환하는 함수
#include <stdio.h>
//함수이름 addArray()
//입력 : 배열
//출력 : 베열 각 요소들의 합
//부수효과: 없음
int addArray(int arr[],int length){
		int sum = 0, index = 0;
	while(index < length){
		sum += arr[index++]; // sum = sum + a[index++]를 의미한다.
		return sum;
}

int main(){
	int a[4] = {10, 20, 30 ,40};
	int length = 4;
	printf("%d\n",addArray(a,4));
//당분간 이 아래는 무시하세요
	return 0;
}