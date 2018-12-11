#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int score;
	struct node* pNext; // 포인터가 자기자신을 가리키는 포인터(그렇게 안중요)
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

int main(){
	Node* pHead = NULL,*ptr;
	pHead = creatNode(11);
	addTail(pHead, creatNode(100));
	printLL(pHead);

	pHead = NULL;
	addTail(pHead, creatNode(100));
	printLL(pHead); //--> pHead가 NULL이면 문제.

	return 0;
}