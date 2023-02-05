#include <iostream>
#include <string>
using namespace std;

int main(){
  int number, sum = 123;
  string str = "";//NULL;
  str = to_string(sum);
  number = stoi(str);
  cout<<str<<","<<number<<endl;
  return 0;
}
