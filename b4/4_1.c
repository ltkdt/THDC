#include <stdio.h>

int main(){
    int n, out = 1;
    scanf("%d", &n);
    if(n < 8 && n > -1){
        for(n; n > 1; n--){
            out *= n;
        }
        printf("%d", out);
    }
    else{
        printf("ERROR");
    }

}
