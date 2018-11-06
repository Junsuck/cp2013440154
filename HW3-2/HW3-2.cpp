//두 정수 사이의 모든 정수들을 더해 그 결과를 반환하는 함수
#include <stdio.h>

void addNumber(int x, int y ){
	int sum = 0;
	while( x <= y ){
		sum += x++;
	}
	printf("The sum is %d\n",sum);
}

int main() {
	int a = 3, b = 50;
	addNumber( a , b );

	printf("end of program\n");

	return 0;
}