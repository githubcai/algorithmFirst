#include <cstdio>
#include <cmath>

const double pi = 4 * atan(1);

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf, %lf\n", sin(pi * n / 180.0), cos(pi * n / 180.0));
    return 0;
}
