#include <cstdio>

int main(){
    int x, n = 0, min, max, s = 0;
    scanf("%d", &x);
    s = max = min = x;
    while(scanf("%d", &x) == 1){
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    printf("%d %d %.3lf\n", min, max, (double)s / n);
    return 0;
}
