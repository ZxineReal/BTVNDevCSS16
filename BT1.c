#include<stdio.h>

int main(){
	int a=5;
	int *ptr;
	ptr=&a;
	
	printf("Gia tri cua a la: %d\n",a);
	printf("Dia chi cua a la: %d\n",&a);
	
	printf("Gia tri cua ptr la: %d\n",ptr);
	printf("Dia chi cua ptr la: %d\n",&ptr);
	
	return 0;
}