#include <cstdio>

int is_prime(int x){
    for(int i = 2; i * i <= x; ++i){
        if(x % i == 0) return 0;
    }
    return 1;
}

int main(){
    int m;
    scanf("%d", &m);
    for(int i = m - 2; i >= 3; --i){
        if(is_prime(i) && is_prime(i + 2)){
            printf("%d %d\n", i, i + 2);
            break;
        }
    }
    return 0;
}
