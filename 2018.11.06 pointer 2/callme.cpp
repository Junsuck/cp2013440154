#include <stdio.h>

	void test( int a){            //3
	a = 100;                      //4
}
	void testPointer(int* ptr){   //6
		*ptr = 100;               //7
	}
int main() {
	int a = 10;                   //1
	test(a);                      //2
	printf("a = %d\n",a);

	//�����͸� �Ű����� ������ ����
	testPointer(&a);              //5
	printf("a = %d\n",a);


	return 0;
}