#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <locale.h>

int main() {

    printf("===== MEMORY FUNCTIONS =====\n");

    char buffer[20] = "HelloWorld";
    
    // memchr()
    char *ptr = memchr(buffer, 'W', strlen(buffer));
    printf("memchr: %c found at position %ld\n", *ptr, ptr - buffer);

    // memcmp()
    printf("memcmp: %d\n", memcmp("ABC", "ABD", 3));  // <0 means smaller

    // memcpy()
    char dest[20];
    memcpy(dest, buffer, strlen(buffer)+1);
    printf("memcpy: %s\n", dest);

    // memmove() (overlapping safe)
    char overlap[] = "123456";
    memmove(overlap+2, overlap, 4);
    printf("memmove: %s\n", overlap);

    // memset()
    char setbuf[10];
    memset(setbuf, 'A', 5);
    setbuf[5] = '\0';
    printf("memset: %s\n", setbuf);


    printf("\n===== STRING FUNCTIONS =====\n");

    char str1[50] = "Hello";
    char str2[50] = "World";

    // strcat()
    strcat(str1, str2);
    printf("strcat: %s\n", str1);

    // strchr()
    char *cptr = strchr(str1, 'W');
    printf("strchr: %c at %ld\n", *cptr, cptr - str1);

    // strcmp()
    printf("strcmp: %d\n", strcmp("abc", "abd"));

    // strcoll()
    setlocale(LC_COLLATE, "");
    printf("strcoll: %d\n", strcoll("abc", "abd"));

    // strcpy()
    char copy[20];
    strcpy(copy, "Test");
    printf("strcpy: %s\n", copy);

    // strcspn()
    printf("strcspn: %lu\n", strcspn("hello123", "123"));

    // strerror()
    printf("strerror: %s\n", strerror(2));

    // strlen()
    printf("strlen: %lu\n", strlen("Hello"));

    // strncat()
    char ncat[20] = "Hi";
    strncat(ncat, "12345", 3);
    printf("strncat: %s\n", ncat);

    // strncmp()
    printf("strncmp: %d\n", strncmp("abc", "abd", 2));

    // strncpy()
    char ncpy[10];
    strncpy(ncpy, "HelloWorld", 5);
    ncpy[5] = '\0';
    printf("strncpy: %s\n", ncpy);

    // strpbrk()
    char *pbrk = strpbrk("abcdef", "xzde");
    printf("strpbrk: %c\n", *pbrk);

    // strrchr()
    char *rchr = strrchr("abca", 'a');
    printf("strrchr: last 'a' at %ld\n", rchr - "abca");

    // strspn()
    printf("strspn: %lu\n", strspn("abc123", "abc"));

    // strstr()
    char *sub = strstr("HelloWorld", "World");
    printf("strstr: %s\n", sub);

    // strtok()
    char tokstr[] = "a,b,c";
    char *token = strtok(tokstr, ",");
    while (token != NULL) {
        printf("strtok: %s\n", token);
        token = strtok(NULL, ",");
    }

    // strxfrm()
    char src[] = "abc";
    char dst[50];
    strxfrm(dst, src, sizeof(dst));
    printf("strxfrm: %s\n", dst);

    return 0;
}
