#include <iostream>
using namespace std;

class Date{
private:
  int day;
  int month;
  int year;
  //cout<<day<<"/"<<month<<"/"<<year<<endl;
public:
  Date(int newD, int newM, int newY) :day(newD), month(newM), year(newY){
    cout<<day<<"/"<<month<<"/"<<year<<endl;}};

int main(){
  Date d1(1,2,2022);
  //d1.Dateinit(1,2,2022);
  return 0;
}
