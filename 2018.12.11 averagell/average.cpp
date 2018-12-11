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


//�Լ� averageLL()
//�Է� : ���Ḯ��Ʈ
//��� : 
//�μ�ȿ�� : ����
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
	//test = 10/4; //1.(10/4)->2��ȯ. 2. ������2�� double�� 2.0���� ��ȯ 
	//printf("test = %f\n",test);
	//test = 10.0/4; //1.(10/4)->2.5��ȯ. 2.  10.0���� �Է��ϸ� �Ǽ������� �ν��Ͽ� 2.5��ȯ. 
	//printf("test = %f\n",test);
	//test = ((double)10)/4; //1.������ 10�� �Ǽ���(double) 10.0���� ��ȯ 
	//printf("test = %f\n",test);

	Node* pHead = NULL,*ptr;
	pHead = creatNode(11);
	ptr = creatNode(20);
	printLL(pHead);
	printf("average = %f\n", averageLL(pHead));

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