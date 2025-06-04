#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int tong = a + b + c;
    double tb = (double)tong / 3;
    printf("%d\n", tong);
    printf("%f", tb);
    return 0;
}