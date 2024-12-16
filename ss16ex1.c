#include<stdio.h>
int main(){
	int x=5;
	int *xPtr=&x ;
	printf("dia chi ma con tro dang tro toi la: %lu\n",xPtr);
	printf("dia chi cua bien x la: %lu\n",&x);
	printf("gia tri cua con tro la: %d\n",*xPtr);
	printf("gia tri cua bien x la: %d",x); 
	return 0; 
} 
