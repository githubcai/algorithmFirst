#include <cstdio>

void swap(int *a, int *b){
    int t = *a; *a = *b; *b = t;
}

int main(){
    int a = 3, b = 4;
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
