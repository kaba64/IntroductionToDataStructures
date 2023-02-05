#include <iostream>
#include "addone.h"
#include "getdoubles.h"

using namespace std;
  
int main(){
  //1:
  //int *ptr;
  //ptr = new int;
  //*ptr = 5.;
  //addOne(ptr);
  //cout<<*ptr<<endl;
  //2:
  int num, i;
  double * arr;
  num = 20;
  
  arr =  getDoubles(num);
  for(i=0;i<num;i++)
    cout<<arr[i]<<endl;

  delete [] arr;
  return 0;
}
