#include <stdio.h>
int main() {
    int n, r = 0, s = 1;
    scanf("%d", &n);
    if (n < 0) s = -1, n = -n;
    while (n) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    printf("%d", r * s);
    return 0;
}