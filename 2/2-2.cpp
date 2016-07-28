#include <cstdio>
#include <cmath>

int main(){
    int a, b, n;
    double m;
    for(a = 1; a <= 9; ++a){
        for(b = 0; b <= 9; ++b){
            n = a * 1100 + b * 11;
            m = sqrt(n);
            if(floor(m + 0.4) == m) printf("%d\n", n);
        }
    }
    return 0;
}
