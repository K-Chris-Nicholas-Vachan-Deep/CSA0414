#include<stdio.h>
int main(){
	double a,b;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	
	a=a-b;
	b=a+b;
	a=b-a;
	printf("Enter the value of a after swapping is a=%d\n",a);
	printf("Enter the value of b after swapping is b=%d\n",b);
	return 0;
}
