#include <stdio.h>
int main() {
    int n, a[20][20], i, j, t = 1, b = 0, e = 0;
    scanf("%d", &n);
    int x = n - 1, y = n - 1, z = 0, w = 1;
    while (t <= n * n) {
        for (j = e; j <= x; j++) a[b][j] = t++;
        b++;
        for (i = b; i <= y; i++) a[i][x] = t++;
        x--;
        for (j = x; j >= z; j--) a[y][j] = t++;
        y--;
        for (i = y; i >= b; i--) a[i][z] = t++;
        z++;
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}