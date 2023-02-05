#include <iostream>

class Thing{
private:
  int* value;
  int val;
public:
  Thing(int newval = 0)
    :value(new int(newval)), val(newval)
  {
    for(int i=0;i<newval;i++){
      value[i] = newval*(i+1);
    }
  }
  void printvalue() const{
    for(int i=0;i<val;i++){
      std::cout<<value[i]<<std::endl;
    }
  }
};

int main(){
  Thing one(1);
  Thing two(2);
  one.printvalue();
  two.printvalue();
  two=one;
  one.printvalue();
  two.printvalue();
}
