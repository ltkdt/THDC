#include <stdio.h>
#include <stdlib.h>

void swap(int* px, int* py){
    int temp = *px;
    *px = *py;
    *py = temp;
}

void ssort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        int cur_min = i;
        for(int j = i + 1; j < n; j++ ){
            if(a[j] < a[cur_min]){
                cur_min = j;
            }
        }
        swap(a + i, a + cur_min);
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr + i, arr + min_idx);
    }
}


int main(){
    int n;
    scanf("%d", &n);
    int* m = (int *)malloc(sizeof(int) * n);
    int i = 0;
    while(i < n){
        scanf("%d", &m[i++]);
    }

    ssort(m, n);

    for(i = 0; i < n-1; i++){
        printf("%d ", m[i]);
    }
    printf("%d", m[n-1]);
    return 0;
}