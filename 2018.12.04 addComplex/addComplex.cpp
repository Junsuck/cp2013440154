#include <stdio.h>
#include <stdlib.h>

typedef struct complex {
	double real;
	double imag; 
}Complex;

void printComplex(Complex* ptr){
		printf("%f +j %f\n",ptr -> real, ptr -> imag);
}

Complex* addConjugate(Complex* ptr1, Complex* ptr2){
	Complex* tempPtr;                            
	tempPtr = (Complex*) malloc(sizeof(Complex)); 
	tempPtr -> real = ptr1 -> real + ptr2 -> real; tempPtr -> imag = ptr1 -> imag + ptr2 -> imag;
	return tempPtr;
}

int main() {
	Complex a,b ;
	Complex* ptr; 
	a.real = 10; a.imag = 20;
	b.real = 5;  b.imag = 10;
	ptr = addConjugate(&a,&b); printComplex(ptr);

	return 0;
}