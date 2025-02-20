#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = NULL;
    
    ptr = (int *)malloc(sizeof(int) * 5);
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Indicate failure
    }

    memcpy(ptr, arr, sizeof(int) * 5);

    // Simulate a potential error (for demonstration)
    // ... some code that could throw an exception ... 

    free(ptr);
    ptr = NULL; 
    return 0;
}