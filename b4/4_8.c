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

    scanf("%d", &n);
    scanf("%lf", &x);

    if(n > 0){
        while( n >= 0){
            out += pow(x, n) / factorial(n) ;
            n--;
        }
        printf("%lf", out);
    }
    else{
        printf("Error");
    }
}
