#include <stdio.h>;
int main(){
	int a;
	printf("Choose one of the number of the following\n");
	printf("1. apple\n");
	printf("2. orange\n");
	printf("3. banana\n");
	printf("4. peach\n");

	printf("enter your choice number here : ");
	scanf("%d",&a);

	if (a==1)
		printf("Your choice is \"apple\"\n");
	else if(a==2)
		printf("Your choice is \"orange\"\n");
	else if(a==3)
		printf("Your choice is \"banana\"\n");
	else if(a==4)
		printf("Your choice is \"peach\"\n");

return 0;
}

