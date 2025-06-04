#include <stdio.h>

#define ML 300

int main(){
    char s[ML];
    char t[ML];

    char ascii[256] = {0};
    fgets(s, ML, stdin);
    fgets(t, ML, stdin);

    //scanf("%s", s);
    //scanf("%s", t);

    //printf("REACHED \n");

    int i = 0;
    while(s[i] != 0){
        ascii[s[i++]]++;
    }

    i = 0;
    while(t[i] != 0){
        ascii[t[i++]]++;
    }

    for(i = 32; i < 256; i++){
        if (ascii[i] > 0){
            printf("%c", i);
        }
    }

    printf("\n");

    for(i = 32; i < 256; i++){
        if (ascii[i] > 0){
            printf("%d\n", ascii[i]);
            
        }
    }

    return 0;
}