#include <iostream>
#include "mergesort.h"
using namespace std;

int main(){
  int lst[] = {19, 2, 20, 1, 0, 18};
  int size, i;
  size = sizeof(lst)/sizeof(lst[0]);
  //swap(&lst[0],&lst[1]);
  //selection_sort(lst,size);
  merge_sort(lst,0,size);
  for(i=0;i<size;i++){
    cout<<lst[i]<<endl;
  }
  //printf("%i\n",linear_search(20, lst, 6));
  return 0;
}
