#include <cstdio>

int f(int n){
    int m = 1;
    for(int i = 1; i <= n; ++i){
        m *= i;
    }
    return m;
}

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d\n", f(n) / (f(m) * f(n - m)));
    return 0;
}
