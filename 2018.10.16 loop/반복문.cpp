#include <stdio.h>
int main() {   
	///ctrl - ]:matching parentheses.
	//ctrl-k,ctrl-f:Format, �ҽ��ڵ带 ���ڰ� �����Ѵ�.
	//ctrl-k, ctrl-c: Comment out
	//ctrl-k,ctrl-u: undo comment out
	//��а� �� ���� �����ϼ���

	//int count = 1;
	//while(count <= 10){
	//printf("count = %d\n",count);
	//count = count + 1;  ////count++�ص� ���� ����.
	//}

	//int count = 1;
	//while(count <= 10)
	//	printf("count = %d\n",count++);//// count��� count++�ְ� �ؿ� �ڵ��� �����ص� �ȴ�. -> �̷���� �߰�ȣ�� �ʿ�x

	//	printf("////////���⼭���� 3�� ��� ���///////////////\n");

	//////1�������� 100������ 3�� ����� ȭ�鿡 ���
	////int counta = 1;
	////while(counta <=100){
	////	if(counta%3 == 0)
	////		printf("counta= %d\n",counta);
	////	counta++;
	////}

	////1�������� 100������ 3�� ����� ������ ������ ȭ�鿡 ���
	//int counta = 1;
	//while(counta <=100){  ////���ǹ� ����
	//	if(counta%3 != 0)
	//		printf("counta= %d\n",counta);///
	//	counta++; //// �̰� while ��
	//}

	//printf("//////////////�б⹮///////////////////\n");
	////Ű���忡�� ������ �Է¹޾� 3�� ��� ���θ� �˷��ִ� ���α׷�
	////���� �۾��� �ݺ������� �����ϰ� ����ڰ� 100�� �Է��ϸ� �����Ѵ�.
	//int input ;
	//while(1){
	//	printf("������ �Է��ϼ���: ");
	//	scanf("%d",&input);
	//	if(input == 100) 
	//		break;
	//	else if(input%3 == 0)
	//		printf("�Է��� ���� %d�� 3�� ����Դϴ�\n");
	//	else
	//	printf("�Է��� ���� %d�� 3�� ����� �ƴմϴ�\n",input);

	//};

	////printf("//////////////�б⹮///////////////////\n");
		int input1 ;
	while(1){
		printf("������ �Է��ϼ���: ");
		scanf("%d",&input1);
		if(input1 == 100) 
			break;
		else if(input1 >= 1000){
			printf("�Է��� ������ 1000���� Ů�ϴ�. �ٽ� �Է����ּ���\n");
			continue;}
		else if(input1%3== 0)
			printf("�Է��� ���� %d�� 3�� ����Դϴ�\n",input1);
		else
		printf("�Է��� ���� %d�� 3�� ����� �ƴմϴ�\n",input1);

	};

	//printf("//////////////������ �� 1���� 100����///////////////////\n");
	//int sum = 0, i = 1;
	//while(i<=100)
	//	//sum = sum + i;
	//		//i++;
	//			//sum = sum + i++;
	//				sum += i++;


	printf("���α׷� ����!!!!!!!!!!\n");
	//��а� �� �Ʒ��� �����ϼ���
	return 0;
}