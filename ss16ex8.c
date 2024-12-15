#include <stdio.h>
void daoNguoc(char *input, char *reverse);
int main() {
    char inputString[100], reverseString[100];
    printf("nhap chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);
    reverseStringUsingPointer(inputString, reverseString);
    printf("chuoi ban dau: %s\n", inputString);
    printf("chuoi dao nguoc: %s\n", reverseString);
    return 0;
}
void reverseStringUsingPointer(char *input, char *reverse) {
    int length = strlen(input);
    char *start = input;
    char *end = input + length - 1;
    while (end >= start) {
        *reverse = *end;
        reverse++;
        end--;
    }
    *reverse = '\0'; 
}
