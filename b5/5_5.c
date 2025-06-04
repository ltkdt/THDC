#include <stdio.h>
#include <stdlib.h>

int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int n;
    scanf("%d", &n);
    if( n <= 1 ){
        printf("0");
        return 0;
    }

    if( n > 10){
        n = 10;
    }
    
        int* m = (int *)malloc(sizeof(int) * n);
        int i = 0;
        while(i < n){
            scanf("%d", &m[i++]);
        }

        int out = m[1] + m[0];
        int cur;
        for(i = 2; i < n; i++ ){
            cur = m[i] + m[i-1];
            out = max(out, cur);
            cur = out;
        }
        if(out < 0){
            printf("0");
        }
        else{
            printf("%d", out);
        }
    
}