#include <stdlib.h>
#include <stdio.h>

int greater(const void * inta, const void * intb){
    int a = *((int*)inta) ;
    int b = *((int*)intb) ;
    if( a > b ) return 1;
    else if(b < a ) return -1;
    return 0;

}

int main(){
    int arr[5] = { 1, 8, 4, -2, 9};

    qsort(arr, sizeof(arr)/sizeof(int), sizeof(int), greater);

    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }
}