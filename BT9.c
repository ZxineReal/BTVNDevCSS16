#include<stdio.h>
#include<stdlib.h>

int* addElement(int *arr,int value, int index, int *size);
int main(){
	int *arr;
	int n;
	printf("Moi ban nhap so luong phan tu: ");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("Moi ban nhap vao phan tu thu %d: ",i+1);
		scanf("%d",arr+i);
	}
	printf("\n");
	
	addElement(arr,11,1,&n);
	
	for(int i=0;i<n;i++){
		printf("arr[%d]: %d\t",i,*(arr+i));
	}
	free(arr);
	return 0;
}
	int *addElement(int *arr,int value, int index, int *size){
		if(index<0 || index>=*size){
			printf("Vi tri khong thich hop");
			return 0;
		}
		arr= realloc(arr,(*size+1)*sizeof(int));
		for(int i=*size; i>index;i--){
			*(arr+i)=*(arr+i-1);
		}
		*(arr+index)=value;
		(*size)++;
	}