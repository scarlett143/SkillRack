#include <stdio.h>
int main() {
    int x, sum = 0;
    while (scanf("%d", &x) == 1) sum += x;
    printf("%d", sum);
    return 0;
}