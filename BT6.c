#include <stdio.h>

int findItem(int *arr, int n, int item) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == item) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,3,4,5,6,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int item = 3;
    
    int index = findItem(arr, n,item);
    
    if (index != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", item, index);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang\n", item);
    }
    
    return 0;
}
