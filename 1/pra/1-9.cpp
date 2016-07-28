#include <cstdio>

int main(){
    int a, b, c, t;
    scanf("%d %d %d", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a){
        if(a > b){ t = a; a = b; b = t;}
        if(a > c){ t = a; a = c; c = t;}
        if(b > c){ t = b; b = c; c = t;}
        if(a * a + b * b == c * c){
            printf("yes\n");
        }else{
            printf("no\n");
        }
    }else{
        printf("not a triangle\n");
    }
}
