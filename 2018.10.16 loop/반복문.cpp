#include <stdio.h>
int main() {   
	///ctrl - ]:matching parentheses.
	//ctrl-k,ctrl-f:Format, 소스코드를 예쁘게 포멧한다.
	//ctrl-k, ctrl-c: Comment out
	//ctrl-k,ctrl-u: undo comment out
	//당분간 이 위는 무시하세요

	//int count = 1;
	//while(count <= 10){
	//printf("count = %d\n",count);
	//count = count + 1;  ////count++해도 값은 같다.
	//}

	//int count = 1;
	//while(count <= 10)
	//	printf("count = %d\n",count++);//// count대신 count++넣고 밑에 코딩은 삭제해도 된다. -> 이런경우 중괄호도 필요x

	//	printf("////////여기서부턴 3의 배수 출력///////////////\n");

	//////1에서부터 100까지의 3의 배수만 화면에 출력
	////int counta = 1;
	////while(counta <=100){
	////	if(counta%3 == 0)
	////		printf("counta= %d\n",counta);
	////	counta++;
	////}

	////1에서부터 100까지의 3의 배수를 제외한 정수만 화면에 출력
	//int counta = 1;
	//while(counta <=100){  ////조건문 범위
	//	if(counta%3 != 0)
	//		printf("counta= %d\n",counta);///
	//	counta++; //// 이건 while 문
	//}

	//printf("//////////////분기문///////////////////\n");
	////키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램
	////위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다.
	////int input ;
	////while(1){
	////	printf("정수를 입력하세요: ");
	////	scanf("%d",&input);
	////	if(input == 100) 
	////		break;
	////	else if(input%3 == 0)
	////		printf("입력한 정수 %d는 3의 배수입니다\n");
	////	else
	////	printf("입력한 정수 %d는 3의 배수가 아닙니다\n",input);

	////};

	////printf("//////////////분기문///////////////////\n");
	////	int input1 ;
	////while(1){
	////	printf("정수를 입력하세요: ");
	////	scanf("%d",&input1);
	////	if(input1 == 100) 
	////		break;
	////	else if(input1 >= 1000){
	////		printf("입력한 정수가 1000보다 큽니다. 다시 입력해주세요\n");
	////		continue;}
	////	else if(input1%3== 0)
	////		printf("입력한 정수 %d는 3의 배수입니다\n");
	////	else
	////	printf("입력한 정수 %d는 3의 배수가 아닙니다\n",input1);

	//};

	printf("//////////////정수의 합 1부터 100까지///////////////////\n");
	int sum = 0, i = 1;
	while(i<=100)
		//sum = sum + i;
		//i++;
		//sum = sum + i++;
		sum += i++;


	printf("프로그램 종료!!!!!!!!!!\n");
	//당분간 이 아래는 무시하세요
	return 0;
}