#include <cstdio>

const int MAXN = 110;

int a[MAXN];

int main(){
    int i, x, n = 0;
    while(scanf("%d", &x) == 1){
        a[n++] = x;
    }
    for(i = n - 1; i >= 1; --i){
        printf("%d ", a[i]);
    }
    printf("%d\n", a[0]);
    return 0;
}
