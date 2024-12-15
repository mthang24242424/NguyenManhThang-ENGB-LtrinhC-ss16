#include<stdio.h>
int main(){
	int x=5;
	int *xPtr=&x ;
	printf("dia chi ma con tro dang tro toi la: %lu\n",xPtr);
	printf("dia chi cua bien x la: %lu",&x);
	return 0; 
} 
