#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    int a[100];
    scanf("%d", &n);
    int i = 0;
    
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    
    for(i = 0; i < n; i++){
        if( a[i] % 3 == 0){
            printf("%d", i);
        }
    }
    double b = 3.12;
    printf("%.4lf", b);
    return 0;
}