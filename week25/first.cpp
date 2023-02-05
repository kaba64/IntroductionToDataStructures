#include <iostream>

using namespace std;

class Date{
private:
  int day;
  int month;
  int year;
public: // mutators
  void setDay(int newDay);
  void setMonth(int newMonth);
  void setYear(int newYear){year=newYear;}
  int getday() const {return day;}
  int getMonth() const {return month;}
  int getYear() const {return year;}
  void displayDate() const {cout<<day<<"/"<<month<<"/"<<year<<endl;}
};
// accessors
void Date::setDay(int newDay){
  if(newDay>0 && newDay<=31)
    day=newDay;
}
void Date::setMonth(int newMonth){
  if(newMonth>0 && newMonth<=12)
    month=newMonth;
}

int main(){
  Date d1;
  d1.setDay(6);
  d1.setMonth(8);
  d1.setYear(1991);
  d1.displayDate();
  return 0;
}
