#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size) {
    void *ptr = malloc(nmemb * size);
    if (ptr == NULL) {
        return NULL;
    }
    memset(ptr, 0, nmemb * size);
    return ptr;
}

int main() {
    int *arr;
    int i, n = 5;

    arr = (int *)_calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
