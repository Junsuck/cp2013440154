//정수 배열의 최대값을 반환하는 함수
#include <stdio.h>
//함수이름 findMax()
//입력 : 배열
//출력 : 베열 각 요소 중 최대값
//부수효과: 없음

int findMax( int arr[], int length){
	int index = 0, max = 0;
		while( index < length ){
		if( arr[index] > max)
			max = arr[index];
		index = index + 1;
	}
		printf("%d\n",max);
		return max;
}

int main(){
	int a[4] = {10, 20, 30 ,40};
	int length = 4;

	findMax( a,length );


	return 0;
}