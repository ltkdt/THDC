#include <stdio.h>

#define ML 300

 /*
        ------
        12
         23
          34
           45
            56
             6
*/

int main(){
    char line[ML];
    fgets(line, ML, stdin);

    char out[ML];

    int i = 0;

    int a = 0;
    for(int j = 0; line[j] != 0; j++){
       
        while (line[j] == 32 && line[j+1] == 32){
            j++;
        }
        
        out[i++] = line[j];
    }

    if(out[0] == 32){
        i = 1;
    }
    else{
        i = 0;
    }

    for(i; out[i] != 0; i++){
        
        if( !(out[i+1] == 0 && out[i] == 32) ){
            printf("%c", out[i]);
            //printf("\n");
            
        }
    }
    return 0;
}
