#include <stdio.h>
#include <math.h>

int factorial(int n){
    int out = 1;
    for(n; n > 1; n--){
        out *= n;
    }
    return out;
}

int main(){
    int n;
    double x, out = 0;

    scanf("%lf %d", &x, &n);
    if(n < 1 || x < 0){
        printf("Error");
    }
    else if (n > 0){
        while( n >= 0){
            out += pow(x, n) / factorial(n) ;
            n--;
        }
        printf("%.4lf", out);
    }
}
