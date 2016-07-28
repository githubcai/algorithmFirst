#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);
    
    double sum = 95.0 * n;
    if(sum >= 300){
        sum *= 0.85;
    }
    printf("%.2lf\n", sum);
    return 0;
}
