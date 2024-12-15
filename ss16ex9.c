#include <stdio.h>
void add(int *arr, int *size, int index, int value);
int main() {
    int arr[6] = {2, 4, 6, 8, 10};  
    int size = 5;                    
    int number, index;
    printf("nhap vi tri muon them: ");
    scanf("%d", &index);
    if (index < 0 || index > size) {
        printf("ko hop le\n");
        return 1;
    }
    printf("nhap gia tri muon them: ");
    scanf("%d", &number);
    add(arr, &size, index, number);
    printf("mang sau khi them gia tri ms:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}

void add(int *arr, int *size, int index, int value) {
    for (int i = *size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    (*size)++;
}
