//배열의 최대값의 인덱스를 반환하는 함수
#include <stdio.h>
//함수이름 findMax()
//입력 : 배열
//출력 : 베열 각 요소 중 최대값의 인덱스
//부수효과: 없음

int findMax( int arr[], int length ){
	int max = 0, index = 0, maxindex = 0;
	while( index < length){
		if( arr[index] > max ){
			max = arr[index];
			maxindex = index ;
		}
		index++;
	}
	printf("%d\n",maxindex);
	return maxindex;
}

int main(){
	int a[4] = {10, 30, 40 ,20};
	int length = 4;

	findMax( a, length);

	return 0;
}