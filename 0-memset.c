#include <stdio.h>
#include <string.h>

int main() {
    int arr[5];
    
    printf("Before memset:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    memset(arr, 0, sizeof(arr));
    
    printf("After memset:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
