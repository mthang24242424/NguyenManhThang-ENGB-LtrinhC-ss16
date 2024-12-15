#include<stdio.h>
void swap(int *x,int *y);

int main(){
	int a=5;
	int b=15;
	printf("gia tri cua a truoc %d\n",a);
	printf("gia tri cua b truoc %d\n",b); 
	swap(&a,&b) ;
	printf("gia tri cua a sau %d\n",a);
	printf("gia tri cua b sau %d\n",b); 
	return 0; 
} 
swap(int *x,int *y){
	/*
		x mang dia chi cua bien a
		y mang dia chi cua bien b
	*/ 
	int temp=*x;
	*x=*y;// x la 15 
	*y=temp; //y la 5 
} 
