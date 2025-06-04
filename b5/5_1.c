#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    if( n <= 0){
        printf("Error");
    }
    else{
        int* m = (int *)malloc(sizeof(int) * n);
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
}