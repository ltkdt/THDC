#include <stdio.h>
#include <stdlib.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
      
        // Assume the current position holds
        // the minimum element
        int min_idx = i;
        
        // Iterate through the unsorted portion
        // to find the actual minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
              
                // Update min_idx if a smaller element is found
                min_idx = j;
            }
        }
        
        // Move minimum element to its
        // correct position
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
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

    selectionSort(m, n);

    for(i = 0; i < n-1; i++){
        printf("%d ", m[i]);
    }
    printf("%d", m[n-1]);
    return 0;
}