#include <cstdio>

int main(){
    double f;
    scanf("%lf", &f);
    if(f < 0) f = -f;
    printf("%.2lf\n", f);
}
