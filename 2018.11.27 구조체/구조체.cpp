#include <stdio.h>
//구조체 선언: 기존의 데이터 타입으로 구성하여 새로운 데이터 타입을 선언한다.
//struct complex{
//	double real;//멤버 변수(member variable)
//	double imag;//상동(ditto)
//};//반드시 세미클론으로 끝내야한다.

//위의 두 문장을 한문장으로 만들 수 있다.

typedef struct complex {
	double real;
	double imag; //double 두줄을 여기다가 추가해도된다.
}Complex;//자료형 "struct complex"를 앞으로 "Complex"라고 부르겠다.
//데이터 타입의 별명 선언
typedef int myintType;//자료형 "int"를 앞으로 "myintType'이라고도 부르겠다.

//함수 printComplex()
//입력 : 복소수
//출력 : 없음
//부수효과 : 없음
//void printComplex(Complex x){
//		printf("%f +j %f\n",x.real,x.imag);
//}

void printComplex(Complex* ptr){
		printf("%f +j %f\n",ptr -> real, ptr -> imag);// 대부분의 경우, 구조체 포인터를 매개변수로 전달받는다
}

//함수 convertToconjugate()
//입력 : 복소수(포인터)
//출력 : 없음
//부수효과 : 입력된 복소수가 켤레 복소수롤 변환됨
void convertToconjugate(Complex* ptr){
	//허수부에 -1을 곱한다.
	ptr -> imag = -1 * ptr->imag;
}
//함수 returnConjugate()
//입력 : 복소수 포인터
//출력 : 복소수 변수
//부수효과 : 없음
Complex* returnConjugate(Complex* ptr){
	Complex	temp;
	temp.real = ptr -> real; temp.imag = ptr -> imag;
	return &temp;
}

int main() {
	myintType count = 10;//==> int count = 10; 과 같은 의미
	//구조체 변수 선언
	Complex a,b ;//struct complex a ; 와 같은의미  ==> 여기부터 필기 1번
	//구조체 포인터 변수 선언
	//대부분 구조체는 포인터 변수를 사용하여 접근한다.
	Complex* ptr; //필기 1번
	a.real = 10;//구조체변수의 멤버변수 접근방법 ==> 구조체변수이름,멤버변수이름
	a.imag = 20;
	printComplex(&a);
	ptr = returnConjugate(&a); printComplex(ptr);
//	convertToconjugate(&a);printComplex(&a);


	ptr = &a;
	ptr -> real = 100;//구조체 포인터 변수의 멤버변수 접근방법 ==> 구조체 변수 이름 -> 멤버변수이름
	ptr -> imag = 200;//구조체를 함수에 던질 때 보통 구조체 자체가 아닌 포인터를 이용하여 던진다.
	printComplex(ptr);

	return 0;
}