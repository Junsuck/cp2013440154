//두 정수 사이의 정수들 중 소수를 화면에 출력하는 함수
#include <stdio.h>
//함수이름 printPrime()
//입력 : 두 정수
//출력 : 두 정수 사이의 출력
//부수효과: 없음

void printPrime( int x, int y){
	while (x <= y){
		int i = 2, sum = 0;
		while( i <= x ){
			if( x % i == 0)
				sum = sum + 1;
			i = i + 1;
		}
		if( sum == 1)
			printf("%d\n",x);
		x = x + 1;
	}
}

int main() {
	int a = 3, b = 50;
	printPrime( a, b );

	printf("end of program\n");

	return 0;
}