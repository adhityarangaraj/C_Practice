#include <stdio.h>

int lS(int a[], int n, int t, int *c) {
    *c = 0;
    
    for (int i = 0; i < n; i++) {
        (*c)++;
        if (a[i] == t) {
            return i;
        }
    }
    return -1;
}

int bS(int a[], int n, int t, int *c) {
    int l = 0;
    int h = n - 1;
    *c = 0;
    
    while (l <= h) {
        int m = l + (h - l) / 2;

        (*c)++; 
        if (a[m] == t) {
            return m;
        }

        if (a[m] < t) {
            l = m + 1;
        } else {
            h = m - 1;
        }
    }
    return -1;
}

int main() {
    int sA[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int uA[] = {40, 90, 10, 80, 50, 20, 100, 30, 60, 70};
    int n = 10;
    int t = 90;
    int lC, bC;
    int lR, bR;

    lR = lS(uA, n, t, &lC);
    bR = bS(sA, n, t, &bC);
    
    printf("N: %d, T: %d\n", n, t);
    
    printf("L-Search: Index %d, Comps %d\n", lR, lC);
    printf("B-Search: Index %d, Comps %d\n", bR, bC);

    return 0;
}