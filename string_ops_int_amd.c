#include <stdio.h>
#include <string.h>

// remove spaces
void remove_spaces(char *str) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

// insert '.' in middle
void insert_middle(char *str) {
    int len = strlen(str);
    int mid = len / 2;

    for (int i = len; i >= mid; i--) {
        str[i + 1] = str[i];
    }

    str[mid] = '.';
}

// reverse a part of string
void reverse(char *str, int s, int e) {
    while (s < e) {
        char temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
    }
}

int main() {
    char str[50] = "he llo wo rld";

    remove_spaces(str);      // helloworld
    insert_middle(str);      // hello.world

    int len = strlen(str);
    int mid = len / 2;

    // reverse first half
    reverse(str, 0, mid - 1);

    // reverse second half
    reverse(str, mid + 1, len - 1);

    printf("Final: %s\n", str);

    return 0;
}
