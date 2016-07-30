#include <cstdio>

int main(){
    int n;
    while(scanf("%d", &n) == 1){
        int k = 1, s = 0;
        for(;;){
            s += k;
            if(s >= n){
                if( k % 2 == 0){
                    printf("%d/%d\n", k + n - s, s - n + 1);
                }else{
                    printf("%d/%d\n", s - n + 1, k + n - s);
                }
                break;
            }
            k++;
        }
    }
    return 0;
}
