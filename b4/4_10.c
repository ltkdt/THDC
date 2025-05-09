#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double x, out = 0;

    scanf("%lf", &x);
    scanf("%d", &n);

    if(n < 1 || x < 0){
        printf("Error");
    }
    else if(n > 0){
        while( n > 0){
            out += pow(x, n) / n;
            n--;
        }
        printf("%.4lf", out + 1);
    }
}
