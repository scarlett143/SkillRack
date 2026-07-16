#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s", s);
    int n = strlen(s), i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || j == n / 2) printf("%c", s[j]);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}