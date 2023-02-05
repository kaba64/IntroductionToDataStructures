#include "cpluspluslabs.h"
using namespace std;

int findminindex(int arr[],int start,int size){
  int min, minval, i;
  min = start;
  minval = arr[start];
  for(i=start+1;i<=size;i++){
    if(arr[i]<minval){
      min = i;
      minval = arr[min];
    }
  }
  return min;
}

void selection_sort(int arr[],int elements){
  int i, j, indexmin;
  for(i=0;i<elements;i++){
    indexmin = findminindex(arr,i,elements-1);
    swap(&arr[i],&arr[indexmin]);
  }
}
