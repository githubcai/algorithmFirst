#include <cstdio>
#include <cstdlib>
#include <ctime>

int n = 100, m = 100000;

double Rand(){
    return (double)rand() / RAND_MAX;
}

int Rand(int m){
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
=======

const int MAXN = 1010;
int n, target[MAXN];

int main(){
    while(scanf("%d", &n) == 1){
        int stack[MAXN], top = 0;
        int A = 1, B = 1;
        for(int i = 1; i <= n; ++i){
            scanf("%d", &target[i]);
        }
        int ok = 1;
        while(B <= n){
            if(A == target[B]){
                A++;
                B++;
            }else if(top && stack[top] == target[B]){
                top--;
                B++;
            }else if(A <= n){
                stack[++top] = A++;
            }else{
                ok = 0;
                break;
            }
        }
        printf("%s\n", ok ? "Yes" : "No");
    }
    return 0;
}
