#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if( a == 0){
        if ( b == 0 && c == 0){
            printf("Phuong trinh vo so nghiem");
        }
        if ( b == 0 && c != 0){
            printf("Phuong trinh vo nghiem");
        }
        printf("%lf", -c / b);
    }
}
