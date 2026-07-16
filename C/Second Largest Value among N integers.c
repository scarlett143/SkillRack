#include <stdio.h>
#include <limits.h>
int main() {
    int n, i, x, m1 = INT_MIN, m2 = INT_MIN;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x > m1) {
            m2 = m1;
            m1 = x;
        } else if (x > m2 && x != m1) m2 = x;
    }
    printf("%d", m2);
    return 0;
}