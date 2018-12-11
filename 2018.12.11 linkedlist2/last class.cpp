#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int score;
	struct node* pNext; // 포인터가 자기자신을 가리키는 포인터(그렇게 안중요)
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


//함수 returnTail()
//입력 : 연결리스트(연결리스트의 헤드노드 포인터)
//출력 : 마지막 노드의 포인터
//부수효과 : 없음
Node* returnTail(Node* ptr){
	if (ptr == NULL)
		return NULL; //연결리스트에 아무 노드가없으면 NULL

	while(ptr != NULL){
		if(ptr -> pNext == NULL)
			return ptr;
		ptr -> pNext;
	}

}

//함수 addTail()
//입력 : 연결리스트, 추가하려는 노드 포인터
//출력 : 없음
//부수효과 : 추가하려는 노드가 연결리스트의 tail로 추가됨
void addTail(Node* pHead, Node* pNode){
	if (pHead == NULL){
		printf("error can't add a tail to empty linked list\n");
		return;
	}
	Node* pTail = returnTail(pHead);
	pTail -> pNext = pNode;

}

//함수 addHead()
//입력 : 연결리스트 구조체 포인터(LinkedList*), 새 노드 포인터
//출력 : 없음
//부수효과 : 연결리스트 헤드에 새 노드를 추가
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
	
	printLL(pList); //--> pHead가 NULL이면 문제.

	return 0;
}