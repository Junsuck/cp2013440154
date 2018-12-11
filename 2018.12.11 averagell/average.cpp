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


//함수 averageLL()
//입력 : 연결리스트
//출력 : 
//부수효과 : 없음
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

Node* creatNode(int input){
	Node* ptr;
	ptr = (Node*) malloc(sizeof(Node));
	ptr -> score = input;
	ptr -> pNext = NULL;
	return ptr;
}

int main(){
	//double test;
	//test = 10/4; //1.(10/4)->2반환. 2. 정수형2를 double형 2.0으로 변환 
	//printf("test = %f\n",test);
	//test = 10.0/4; //1.(10/4)->2.5반환. 2.  10.0으로 입력하면 실수형으로 인식하여 2.5반환. 
	//printf("test = %f\n",test);
	//test = ((double)10)/4; //1.정수형 10을 실수형(double) 10.0으로 변환 
	//printf("test = %f\n",test);

	Node* pHead = NULL,*ptr;
	pHead = creatNode(11);
	ptr = creatNode(20);
	printLL(pHead);
	printf("average = %f\n", averageLL(pHead));

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