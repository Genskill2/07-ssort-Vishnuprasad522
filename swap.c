#include <stdio.h>
#include <cs50.h>


void swap_max(int arr[], int length, int position) {
  int max = arr[position], dest=0; 
  if(position<(length-1)) {
    for (int i=position; i<length-1; i++) {
      if(arr[i]>arr[i+1]) {
        if(arr[i]>=max) {
          max = arr[i];
          dest = i;
        }
      }
      else {
        if(arr[i+1]>=max) {
          max = arr[i+1];
          dest = i+1;
        }
      }
    }
    int j = arr[dest];
    arr[dest] = arr[position];
    arr[position] = j;
  }
}

void ssort(int arr[], int length) {
  for(int i=0; i<length; i++) {
    swap_max(arr, length, i);
  }
}
