///두 정수 사이에 모든 정수들(두 정수 포함)를 순서대로 화면에 출력하는 함수
//1. 함수 이름:1.함수이름은 소문자로 시작 2. 함수의 첫 단어는 동사 3. 두 단어이상을 조합할 경우 두번째 이후 단어의 첫 글자는 대문자 ex) printNumber
//2. 함수 반환형 3. 함수 매개변수의 수 4.각 매개변수의 자료형 

#include <stdio.h>
//함수 printNumber()
//입력 : 두 정수
//출력 : 없음
//부수효과 : 없음
void printNumber(int x, int y){ // (배열이름[],배열 길이)
	int count = x;
	while(count <=y){
		printf("%d\n", count++); ////a[count] : 변수를 index에 넣은 경우.
	}
}
int main() {

	int a = 3, b = 50;
	//printNumber(a,b)
	printNumber(a,b);

	printf("end of program\n");

	return 0;
}