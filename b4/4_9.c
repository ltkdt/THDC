#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double x, out = 0;

    scanf("%lf %d", &x, &n);
    if(n < 1 || x < 0){
        printf("Error");
    }
    else{
        int i = 1;
        double out = sqrt(x);
        while (i < n){
            out = sqrt(x + out);
            i++;
        }
        printf("%.4lf", out);
    }
}