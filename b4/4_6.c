#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double x, out = 0;

    scanf("%d", &n);
    scanf("%lf", &x);

    if(n > 0){
        while( n >= 0){
            out += pow(x, n);
            n--;
        }
        printf("%lf", out);
    }
    else{
        printf("Error");
    }
}
