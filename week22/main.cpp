#include <iostream>
#include "bsearch.h"
//#include "lsearch.h"
using namespace std;

int main(){
  int lst[] = {0, 1, 2, 18, 19, 20, 25};
  
  printf("%i\n",binary_search(20, lst, 7));
  //printf("%i\n",linear_search(20, lst, 6));
  return 0;
}
