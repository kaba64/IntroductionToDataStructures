#include <iostream>
#include <string>
//#include "showticket.h"
using namespace std;

class ShowTickets{
  
public:
  ShowTickets(){
    for(int i=0;i<10;i++){
      sold_st[i] = false;
    }
    count = 0;
  }
  bool is_sold(const string rowin, const string seatin){
    for(int i=0;i<count;i++){
      if((row[i]==rowin) && (seat[i]==seatin)){
	return sold_st[i];
      }
    }
    return false;
  }
  void sell_seat(const string rowin, const string seatin){
    row[count] = rowin;
    seat[count] = seatin;
    sold_st[count] = true;
    count+=1;
  }
  string print_ticket(const string rowin, const string seatin){
    string status;
    for(int i=0;i<count;i++){
      if((row[i]==rowin) && (seat[i]==seatin)){
        return (row[i]+" "+seat[i]+" sold");
      }
    }
    return (rowin+" "+seatin+" available");
  }
private:
  string row[10];
  string seat[10];
  bool sold_st[10];
  int count;
};

int main () {
  ShowTickets myticket;
  if(!myticket.is_sold("AA","101"))
    myticket.sell_seat ("AA","101");
  cout << myticket.print_ticket("AA","101") << endl;
  cout << myticket.print_ticket("AA","102") << endl;
  return 0;
}
