#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int score;
	struct node* pNext; // �����Ͱ� �ڱ��ڽ��� ����Ű�� ������(�׷��� ���߿�)
}Node;

void printLL(Node* ptr){
	while(ptr != NULL){
		printf("score = %d\n",ptr -> score);
		ptr = ptr -> pNext;
	}
}


Node* creatNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr -> score = input;
	ptr -> pNext = NULL;
	return ptr;
}


//�Լ� returnTail()
//�Է� : ���Ḯ��Ʈ(���Ḯ��Ʈ�� ����� ������)
//��� : ������ ����� ������
//�μ�ȿ�� : ����
Node* returnTail(Node* ptr){
	if (ptr == NULL)
		return NULL; //���Ḯ��Ʈ�� �ƹ� ��尡������ NULL

	while(ptr != NULL){
		if(ptr -> pNext == NULL)
			return ptr;
		ptr -> pNext;
	}

}

//�Լ� addTail()
//�Է� : ���Ḯ��Ʈ, �߰��Ϸ��� ��� ������
//��� : ����
//�μ�ȿ�� : �߰��Ϸ��� ��尡 ���Ḯ��Ʈ�� tail�� �߰���
void addTail(Node* pHead, Node* pNode){
	if (pHead == NULL){
		printf("error can't add a tail to empty linked list\n");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail -> pNext = pNode;

}

int main(){
	Node* pHead = NULL,*ptr;
	pHead = creatNode(11);
	addTail(pHead, creatNode(100));
	printLL(pHead);

	pHead = NULL;
	addTail(pHead, creatNode(100));
	printLL(pHead); //--> pHead�� NULL�̸� ����.

	return 0;
}