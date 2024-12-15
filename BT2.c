#include<stdio.h>

void swap(int x,int y){
	int temp=x;
	x=y;
	y=temp;
	printf("Gia tri cua x la: %d\n",x);
	printf("Gia tri cua y la: %d\n",y);
}
int main(){
	int a=5;
	int b=15;
	swap(a,b);
	
	return 0;
}