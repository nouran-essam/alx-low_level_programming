/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */

#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size) {
    if (nmemb == 0 || size == 0) {
        return NULL;
    }

    void *ptr = malloc(nmemb * size);
    if (ptr == NULL) {
        return NULL;
    }

 memset(ptr, 0, nmemb * size);
    return ptr;
}
