#include <stdio.h>


int main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int tong = a + b + c;
    float tb = (float)tong / 3;
    printf("%d\n", tong);
    printf("%f", tb);
    //getch();
    
}