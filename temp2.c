#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define ML 100

int main(){
    char s[ML];
    char out[ML];
    fgets(s, ML, stdin);
    int i = 0, j = 0;
    
    for(i; s[i] != 0; i++){
        while (s[i] == 32 && s[i+1] == 32){
            i++;
        }
        out[j++] = s[i];
        
    }
    
    if( out[0] == 32){
        j = 1;
    }
    else{
        j = 0;
    }
     
     
    for(j; out[j+1] != 0; j++){
        //if ( !(out[j+1] == 0 && out[j] == 32))
        printf("%c", out[j]); 
    }

}