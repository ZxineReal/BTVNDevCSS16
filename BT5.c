#include <stdio.h>

void editItem(int *arr, int item, int index) {
    arr[index] = item;
}

int main() {
    int arr[] = {1,2,7,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang truoc khi sua la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    editItem(arr, 3, 2);
    
    printf("Mang sau khi sua la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
