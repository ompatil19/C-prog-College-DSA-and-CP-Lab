#include <stdio.h>
#include <string.h>

int longest(char* str) {
    int maxlen = 0;
    int length = 0;
    int stack[100], top = -1;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '(') {
            stack[++top] = i;
        } else {
            if (top != -1 && str[stack[top]] == '(') {
                top--;
                if (top != -1) {
                    length = i - stack[top];
                } else {
                    length = i + 1;
                }
                maxlen = maxlen > length ? maxlen : length;
            } else {
                stack[++top] = i;
            }
        }
    }

    return maxlen;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int maxlen = longest(str);
    printf("Length: %d\n", maxlen);

    return 0;
}
