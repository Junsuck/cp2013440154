#include <stdio.h>
#include <string.h>

void printArray(char* arr, int len){ 
	for(int index = 0; index < len; index++)
		printf("array[%d] = %c\n", index, arr[index]);
}

int main() {
	char c; //character(����)��, �ڷ��� char�� 1byte --> -128 ~ 127
	c = 'A'; //==> c = 65;
	printf("c=%d\n",c);
	printf("c=%c\n",c); //%c�� character�� ǥ��, %d�� decimal�� ǥ��

	char a[]={'h','e','l','l','o', };
	printArray(a,5);


	//���ڿ�(string)
	char b[] = "hello"; //==> char b[]={'h','e','l','l','o', \0};  ->\0�� null, �̷��� ��� �迭�� ���� �Է� �ʿ�X
	printf("%s \n",b);

	printf("the length of the string is %d \n", strlen(b));

	char str1[50] = "hello";
	char* str2 = " world";
	strcat(str1,str2);
	printf("%s \n", str1);
	strcpy(str1,str2); //hello�ڸ��� world�� �����
	printf("%s \n", str1);


	return 0;
}