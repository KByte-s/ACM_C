#include <stdio.h>
int a(int x, int y) {
    if (x % y == 0)
        return y;
    else
        return a(y, x % y);
}
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int m, l, c;
        scanf("%d", &m);
        scanf("%d", &l);
        for (int j = 1; j < m; ++j) {
            scanf("%d", &c);
            l = (l / a(l, c)) * c;
        }
        printf("%d\n", l);
    }
}
