#include <cstdio>

int main(){
    double f, c;
    scanf("%lf", &f);
    c = 5 * (f - 32) / 9.0;
    printf("%.3lf\n", c);
    return 0;
}
