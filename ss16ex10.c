#include <stdio.h>
void delete(int *arr, int *size, int index);
int main() {
    int arr[6] = {2, 4, 6, 8, 10};  
    int size = 5;
    int index;
    printf("Nhap vi tri can xoa: ");
    scanf("%d", &index);
    if (index < 0 || index >= size) {
        printf("ko hop  le\n");
        return 1;
    }
    delete(arr, &size, index);
    printf("mang sau khi xoa:\n");
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}
void delete(int *arr, int *size, int index) {
    for (int i = index; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
