#include <cstdio>
#include <cstring>
#include <cctype>

const int MAXN = 5010;
char buf[MAXN], s[MAXN];

int main(){
    int n, m = 0, max = 0;
    fgets(buf, sizeof(s), stdin);
    n = strlen(buf);
    for(int i = 0; i < n; ++i){
        if(isalpha(buf[i])){
            s[m++] = toupper(buf[i]);
        }
    }
    for(int i = 0; i < m; ++i){
        for(int j = i; j < m; ++j){
            int ok = 1;
            for(int k = i; k <= j; ++k){
                if(s[k] != s[i + j -k]) ok = 0;
            }
            if(ok && j - i + 1 > max) max = j - i + 1;
        }
    }
    printf("max = %d\n", max);
    return 0;
}
