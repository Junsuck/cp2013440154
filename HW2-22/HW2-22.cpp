#include <stdio.h>
int main (){
int a = 1 ,i = 0;

printf("����� �Է�\n");
while(a != 0){
printf("");
scanf("%d",&a);
if(a > i)
	i = a;
}
printf("��� :%d\n",i);
return 0 ;
}