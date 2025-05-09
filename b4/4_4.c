#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(!(a > 0 && b > 0)){
        printf("ERROR");
    }
    else{
        int m = a * b;

        int t;
        while( a > 0){
            if(a < b){
                t = a; a = b; b = t;
            }
            a = a - b;
        }
        printf("%d\n", b);
        printf("%d", m / b);
    }
}