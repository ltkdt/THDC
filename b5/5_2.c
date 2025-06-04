#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int* m = (int *)malloc(sizeof(int) * n);
    int i = 0;
    while(i < n){
        scanf("%d", &m[i++]);
    }

    double psum, nsum, n_count;
    n_count = psum = nsum = 0;
    for(--i; i > -1; i-- ){
        if(m[i] > 0){
            psum += m[i];
            
        }
        else if(m[i] < 0 ){
            nsum += m[i];
            n_count++;
        }
    }

    if(n_count > 0){
        nsum /= n_count;
    }

    if(nsum == 0){
        printf("Mang khong co so am ");
    }
    else{
        printf("%lf ", nsum);
    }

    if(psum == 0){
        printf("Mang khong co so duong");
    }
    else{
        printf("%lf", psum);
    }
    
}