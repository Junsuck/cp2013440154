#include <stdio.h>
#include <string.h>

void printArray(char* arr, int len){ 
	for(int index = 0; index < len; index++)
		printf("array[%d] = %c\n", index, arr[index]);
}

int main() {
	char c; //character(문자)형, 자료형 char은 1byte --> -128 ~ 127
	c = 'A'; //==> c = 65;
	printf("c=%d\n",c);
	printf("c=%c\n",c); //%c는 character를 표시, %d는 decimal을 표시

	char a[]={'h','e','l','l','o', };
	printArray(a,5);


	//문자열(string)
	char b[] = "hello"; //==> char b[]={'h','e','l','l','o', \0};  ->\0는 null, 이러한 경우 배열의 길이 입력 필요X
	printf("%s \n",b);

	printf("the length of the string is %d \n", strlen(b));

	char str1[50] = "hello";
	char* str2 = " world";
	strcat(str1,str2);
	printf("%s \n", str1);
	strcpy(str1,str2); //hello자리에 world가 복사됨
	printf("%s \n", str1);


	return 0;
}