#include <stdio.h>
#include <math.h>

/*
void swap(double *a, double *b){
    double t = *a;
    *a = *b;
    *b = t;
}
*/

int main(){
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if( a == 0){
        if ( b == 0 && c == 0){
            printf("Phuong trinh vo so nghiem");
        }
        else if ( b == 0 && c != 0){
            printf("Phuong trinh vo nghiem");
        }
        else{
            printf("%lf", -c / b);
        }
    }
    else{
        double r1, r2, re, im,  d = b * b - 4 * a * c;
        if(d > 0 ){
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("%lf\n", r1);
            printf("%lf", r2);
        }
        else if (d == 0 ){
            r1 = r2 = -b / (2 * a);
            printf("%lf", r1);
        }
        else{
            re = -b / (2 * a);
            im = sqrt(-d) / (2 * a);
            printf("%lf+%lfi\n", re, im);
            printf("%lf-%lfi", re, im);
        }
    }

}
