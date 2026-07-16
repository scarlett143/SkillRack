#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s", s);
    int n = strlen(s), i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) printf("%c", s[j]);
        printf("\n");
    }
    return 0;
}