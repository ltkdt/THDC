#include "stdio.h"
#include "math.h"

int main(){
    int n = 12345;
    int a;
    while(n > 0){
        a = n % 10;
        printf("%d ", a);

        n /= 10;
    }
}