#include <stdio.h>
#include <string.h>

void reverse(char *inputString, char *reverseString, int size) {
    int j = 0;
    for (int i = size - 1; i >= 0; i--) {
        reverseString[j] = inputString[i];
        j++;
    }
}

int main() {
    char inputString[100];
    char reverseString[100];
    
    printf("Moi ban nhap vao mot chuoi: \n");
    fgets(inputString, sizeof(inputString), stdin);
    
    
    int size = strlen(inputString);
    
    printf("Chuoi truoc khi dao nguoc la: %s", inputString);
    
    reverse(inputString, reverseString, size);
    
    printf("Chuoi sau khi dao nguoc la: %s", reverseString);
    
    return 0;
}
