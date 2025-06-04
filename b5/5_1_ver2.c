#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int m[1000];
    int i = 0;
    while(i < n){
        scanf("%d", &m[i++]);
    }

    int sum = 0;
    for(--i; i > -1; i-- ){
        sum += m[i];
        printf("%d ", m[i]);
    }
    printf("\n%d", sum);
}