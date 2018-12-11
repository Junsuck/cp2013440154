#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int score;
	struct node* pNext; // �����Ͱ� �ڱ��ڽ��� ����Ű�� ������(�׷��� ���߿�)
}Node;

typedef struct linkedlist{
	Node* pHead;
	Node* pTail;
	int nNode;
}LinkedList;

void printLL(LinkedList* pList){
	Node* ptr = pList -> pHead;
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

//�Լ� addHead()
//�Է� : ���Ḯ��Ʈ ����ü ������(LinkedList*), �� ��� ������
//��� : ����
//�μ�ȿ�� : ���Ḯ��Ʈ ��忡 �� ��带 �߰�
void addHead(LinkedList* pList, Node* pNewNode){
	if(pList -> pHead == NULL)
		pList -> pTail = pNewNode;
	pNewNode -> pNext = pList -> pHead; //#1
	pList->pHead = pNewNode;//#2
	(pList -> nNode)++;
}

int main(){
	LinkedList* pList;
	pList = (LinkedList*) malloc(sizeof(LinkedList));
	pList -> pHead = pList -> pTail = NULL; pList -> nNode = 0;
	addHead(pList,creatNode(10));
	addHead(pList,creatNode(20));
	addHead(pList,creatNode(30));
	addHead(pList,creatNode(40));
	
	printLL(pList); //--> pHead�� NULL�̸� ����.

	return 0;
}