#include "stdio.h"
#include "string.h"

int main(){

    // WILL NOT WORK: char* a = "asd sdj sds"; 
    char a[100] = "asd sdj sds";
    char *token;
    token  = strtok(a, " ");
    while(token != NULL){
        printf(" %s", token);
        token = strtok(NULL, " ");
        
    }
}