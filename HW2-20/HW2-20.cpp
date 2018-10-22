#include <stdio.h>
int main (){
int a = 1,i;
int count=0 ;
while(a<=100){
	if(count == 1)
		printf("%d\n",a);
	a = a + 1; i = 1;count = 0;
	while(a>i){
		if(a%i==0){
		count = count + 1;
		i = i + 1;
		}
		else if (a%i !=0)
			i = i + 1;
	}

}

return 0 ;
}