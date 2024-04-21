#include <stdio.h>

void shellSort(int arr[], int n) {
    for (int gap = n/2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}

int main() {
   
   int n;
   printf("enter number of elements in Array\t");
   scanf("%d",&n);
   int arr[n];
    
    
      printf("enter elements of Array:\n");
      for(int i=0;i<n;i++)
      {
       scanf("%d",&arr[i] );
      }

    printf("Original array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    shellSort(arr, n);

    printf(" Shell  Sorted array IS : \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
