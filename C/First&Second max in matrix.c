#include <stdio.h>

void findmax(int fsmax[2], int row, int n, int dp[][n]) {
    int fmax = dp[row][0], smax = -1;
    for (int j = 1; j < n; j++) {
        if (dp[row][j] > fmax) {
            smax = fmax;
            fmax = dp[row][j];
        } else if (dp[row][j] > smax) {
            smax = dp[row][j];
        }
    }
    fsmax[0] = fmax;
    fsmax[1] = smax;
}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int a[m][n], dp[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 0; j < n; j++) {
        dp[0][j] = a[0][j];
    }

    int fsmax[2];
    findmax(fsmax, 0, n, dp);

    for (int i = 1; i < m; i++) {
        findmax(fsmax, i - 1, n, dp);
        for (int j = 0; j < n; j++) {
            if (dp[i - 1][j] == fsmax[0]) {
                dp[i][j] = a[i][j] + fsmax[1];
            } else {
                dp[i][j] = a[i][j] + fsmax[0];
            }
        }
    }

    int ans1 = dp[m - 1][0], ans2 = -1;
    for (int j = 1; j < n; j++) {
        if (dp[m - 1][j] > ans1) {
            ans2 = ans1;
            ans1 = dp[m - 1][j];
        } else if (dp[m - 1][j] > ans2) {
            ans2 = dp[m - 1][j];
        }
    }

    printf("%d %d\n", ans1, ans2);
    return 0;
}