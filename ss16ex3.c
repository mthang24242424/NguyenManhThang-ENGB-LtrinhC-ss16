#include<stdio.h>
int sum(int *a,int *b); 
int main(){
	int a=5;
	int b=10; 
	sum(&a,&b);
	return 0; 
} 
sum(int*a,int*b){
	int result =*a+*b;
	printf("tong 2 so la %d",result); 
	return result; 
} 
