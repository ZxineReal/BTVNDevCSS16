#include <stdio.h>

void result(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {5, 2, 9, 1, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang truoc khi sap xep la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    result(arr, n);
    
    printf("Mang sau khi sap xep la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}\
