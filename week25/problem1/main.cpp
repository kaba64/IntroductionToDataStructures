#include <iostream>
#include <string>
#include "showticket.h"
using namespace std;

//class ShowTicket{

//public:
//  ShowTicket(const string rowin, const string seati){
//    row = rowin;
//    seat = seati;
//    sold_st = false;
//  };
//  bool is_sold(){
//    return sold_st;
//  }
//  void sell_seat(){
//    sold_st = true;
//  }
//  string print_ticket(){
//    string status;
//    if(sold_st){
//      status = "sold";
//    }else{
//      status = "available";
//    }
//   return (row+" "+seat+" "+status);
//  }
//private:
//  string row;
//  string seat;
//  bool sold_st;
//};

int main () {
  ShowTicket myticket1("AA","101");
  ShowTicket myticket2("AA","102");
  if(!myticket1.is_sold())
    myticket1.sell_seat ();
  cout << myticket1.print_ticket() << endl;
  cout << myticket2.print_ticket() << endl;
  return 0;
}
