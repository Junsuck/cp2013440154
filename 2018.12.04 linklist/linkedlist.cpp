//Linked List����
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int score;
	struct node* pNext; // �����Ͱ� �ڱ��ڽ��� ����Ű�� ������(�׷��� ���߿�)
}Node;

//�Լ� printLL() ȭ�鿡 ���Ḯ��Ʈ�� score���� ���
//�Է�: ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//���: ����
//�μ�ȿ��: ����
void printLL(Node* ptr){
	while(ptr != NULL){
		printf("score = %d\n",ptr -> score);
		ptr = ptr -> pNext;
	}
}
//�Լ� createNode() 
//�Է�: ����
//���: ����ϳ��� �����Ҵ����� �����Ͽ� �����͸� ��ȯ�Ѵ�. �� �� score=�Է�. pNext = NULL�� �Ѵ�.
//�μ�ȿ��: ����
Node* creatNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr -> score = input;
	ptr -> pNext = NULL;
	return ptr;
}

double averageLL(Node* ptr){
	int sum = 0, count = 0;
	double average;
	while(ptr != NULL){
		sum += ptr -> score;
		count++;
		ptr = ptr -> pNext;
	}
	average = (double)sum / count;
	return average;
}

//�Լ� addHead() 
//�Է�: ���Ḯ��Ʈ, �� ���
//���: ����
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
//void addHead(Node* pHead, Node* pNewNode){
//	pNewNode -> pNext = pHead;
//	pHead = pNewNode;
//}  -->�߸��� ���


//�Լ� addHead() 
//�Է�: ���Ḯ��Ʈ�� ����������(��� �������� ������), �� ��� ������
//���: ����
//�μ�ȿ��: ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(Node** ppHead, Node* pNewNode){
	pNewNode -> pNext = *ppHead; //34
	*ppHead = pNewNode; //35
}

int main(){
	double test;
	test = 10/4;
	printf("test = %f\n",test);
}

int main() {
	Node* pHead = NULL,*ptr;//������� ������, NULL�̸� ���Ḯ��Ʈ�� ���ٴ� �ǹ�(�� �������)
	/*Node a,b;
	a.score = 10; b.score = 20;
	a.pNext = &b; b.pNext = NULL;
	pHead = &a;*/
	pHead = creatNode(10);
	ptr = creatNode(20);
	addHead(&pHead,ptr);
	printLL(pHead);

	return 0;
}
