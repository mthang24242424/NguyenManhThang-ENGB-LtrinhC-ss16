#include<stdio.h>
void mang(int *arr, int size, int index, int value);
int main() {
    int arr[5] = {2, 4, 6, 8, 10}; 
    int number, index;
    printf("nhap vi tri muon sua: ");
    scanf("%d", &index);
    if (index < 0 || index >= 5) {
        printf("ko co vi tri nay\n");
        return 1;
    }
    printf("nhap gia tri muon sua: ");
    scanf("%d", &number);
    mang(arr, 5, index, number);
    return 0;
}
void mang(int *arr, int size, int index, int value) {
    arr[index] = value; 
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
