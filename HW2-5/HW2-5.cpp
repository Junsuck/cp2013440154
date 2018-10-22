#include <stdio.h>
int main (){
int n = 0, sum = 0;
do{
sum=sum+n;
n = n + 3;
} while(n <= 100);
printf("รัวี : %d\n", sum);
return 0 ;
}