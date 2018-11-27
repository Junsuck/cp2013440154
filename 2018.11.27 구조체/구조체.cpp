#include <stdio.h>
//����ü ����: ������ ������ Ÿ������ �����Ͽ� ���ο� ������ Ÿ���� �����Ѵ�.
//struct complex{
//	double real;//��� ����(member variable)
//	double imag;//��(ditto)
//};//�ݵ�� ����Ŭ������ �������Ѵ�.

//���� �� ������ �ѹ������� ���� �� �ִ�.

typedef struct complex {
	double real;
	double imag; //double ������ ����ٰ� �߰��ص��ȴ�.
}Complex;//�ڷ��� "struct complex"�� ������ "Complex"��� �θ��ڴ�.
//������ Ÿ���� ���� ����
typedef int myintType;//�ڷ��� "int"�� ������ "myintType'�̶�� �θ��ڴ�.

//�Լ� printComplex()
//�Է� : ���Ҽ�
//��� : ����
//�μ�ȿ�� : ����
//void printComplex(Complex x){
//		printf("%f +j %f\n",x.real,x.imag);
//}

void printComplex(Complex* ptr){
		printf("%f +j %f\n",ptr -> real, ptr -> imag);// ��κ��� ���, ����ü �����͸� �Ű������� ���޹޴´�
}

//�Լ� convertToconjugate()
//�Է� : ���Ҽ�(������)
//��� : ����
//�μ�ȿ�� : �Էµ� ���Ҽ��� �ӷ� ���Ҽ��� ��ȯ��
void convertToconjugate(Complex* ptr){
	//����ο� -1�� ���Ѵ�.
	ptr -> imag = -1 * ptr->imag;
}
//�Լ� returnConjugate()
//�Է� : ���Ҽ� ������
//��� : ���Ҽ� ����
//�μ�ȿ�� : ����
Complex* returnConjugate(Complex* ptr){
	Complex	temp;
	temp.real = ptr -> real; temp.imag = ptr -> imag;
	return &temp;
}

int main() {
	myintType count = 10;//==> int count = 10; �� ���� �ǹ�
	//����ü ���� ����
	Complex a,b ;//struct complex a ; �� �����ǹ�  ==> ������� �ʱ� 1��
	//����ü ������ ���� ����
	//��κ� ����ü�� ������ ������ ����Ͽ� �����Ѵ�.
	Complex* ptr; //�ʱ� 1��
	a.real = 10;//����ü������ ������� ���ٹ�� ==> ����ü�����̸�,��������̸�
	a.imag = 20;
	printComplex(&a);
	ptr = returnConjugate(&a); printComplex(ptr);
//	convertToconjugate(&a);printComplex(&a);


	ptr = &a;
	ptr -> real = 100;//����ü ������ ������ ������� ���ٹ�� ==> ����ü ���� �̸� -> ��������̸�
	ptr -> imag = 200;//����ü�� �Լ��� ���� �� ���� ����ü ��ü�� �ƴ� �����͸� �̿��Ͽ� ������.
	printComplex(ptr);

	return 0;
}