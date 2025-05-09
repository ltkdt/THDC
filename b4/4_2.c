#include <stdio.h>

int main(){
    int n, cnt = 0;
    scanf("%d", &n);

    if(n <= 1 ){
        printf("Khong phai so nguyen to");
    }
    else{
        for(int i = 2; i * i <= n; i++){
            if ( n % i == 0 ){
                cnt++;
            }
        }
        (cnt > 0) ? printf("Khong phai so nguyen to") : printf("La so nguyen to");
    }
}