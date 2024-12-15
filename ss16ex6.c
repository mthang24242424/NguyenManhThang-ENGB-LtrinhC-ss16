#include<stdio.h>
void find(int *arr, int size, int value);
int main() {
    int arr[5] = {2, 4, 6, 8, 10}; 
    int number;                     
    printf("nhap gia tri can tim: ");
    scanf("%d", &number);
    find(arr, 5, number);
    return 0;
}
void find(int *arr, int size, int value) {
    int flag = 0;  
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            printf("Gia tri %d o vi tri arr[%d]\n", value, i);
            flag = 1;  
            break;      
        }
    }
    if (!flag) {
        printf("ko co trong mang.\n", value);
    }
}
