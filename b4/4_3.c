#include <stdio.h>

int main(){
    int n, out = 0;
    scanf("%d", &n);

    if(n < 1000){
        while( n > 0){
            out += n % 10;
            n /= 10;
        }
        printf("%d", out);
    }
    else{
        printf("ERROR");
    }
}