#include <iostream>
#include <string>
#include <math.h>
using namespace std;

bool is_palindrome(int test){
  int num1, num2, newnum, size;
  string str;
  bool inter_bool;
  
  if((test/10)==0 || (test/100)==0){
    if((test/10)==0){
      return true;
    }else{
      num1 = test-(test/10)*10;
      num2 = test/10;
      return (num1==num2); 
    }
  }else{
    str = to_string(test);
    size = str.length();
    num1 = test - (test/10)*10;
    num2 = test/pow(10,size-1);
    newnum = test - num2*pow(10,size-1);
    newnum = newnum/10;
    inter_bool = is_palindrome(newnum);
    return (inter_bool && (num1==num2));
  }
}
