#include <cstdio>
#include <cstdlib>
#include <ctime>

int n = 100, m = 100000;

double Rand(){
    return (double)rand() / RAND_MAX;
}

double Rand(int m){
    return (int)(Rand() * (m - 1) + 0.5);
}

int main(){
    srand(time(NULL));
    printf("%d %d\n", n, m);
    for(int i = 0; i < m; ++i){
        if(rand() % 2 == 0){
            printf("A");
        }else{
            printf("B");
        }
        int X, Y;
        for(;;){
            X = Rand(n) + 1;
            Y = Rand(n) + 1;
            if(X != Y) break;
        }
        printf(" %d %d\n", X, Y);
    }
    return 0;
}
