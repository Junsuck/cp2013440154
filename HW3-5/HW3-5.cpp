//n단의 구구단을 화면에 출력하는 함수
#include <stdio.h>
//함수이름 printMultiplication()
//입력 : 한 개의 정수
//출력 : 입력한 정수의 구구단
//부수효과: 없음
void addMultiplication(int x){
	printf("%d\n",x*1);
	printf("%d\n",x*2);
	printf("%d\n",x*3);
	printf("%d\n",x*4);
	printf("%d\n",x*5);
	printf("%d\n",x*6);
	printf("%d\n",x*7);
	printf("%d\n",x*8);
	printf("%d\n",x*9);
}

int main() {
	int a;
	printf("한 자리 정수를 입력하시오 :");
	scanf("%d",&a);

	addMultiplication(a);

	printf("end of program\n");

	return 0;
}