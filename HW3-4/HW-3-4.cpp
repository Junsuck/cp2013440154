// 3개 중 제일 작은 정수를 반환하는 함수
#include <stdio.h>
//함수 printNumber()
//입력 : 세 정수
//출력 : 없음
//부수효과 : 없음
void printNumber( int x, int y, int z){
	int print = x;
	if( print > y )
		print = y;
	if( print > z )
		print = z;
	printf("The smallest number is %d\n",print);
}

int main() {
	int a , b, c;
	printf("첫 번째 정수를 입력하시오 :");
	scanf("%d",&a);
	printf("두 번째 정수를 입력하시오 :");
	scanf("%d",&b);
	printf("세 번째 정수를 입력하시오 :");
	scanf("%d",&c);

	printNumber( a, b ,c);

	printf("end of program\n");

	return 0;
}