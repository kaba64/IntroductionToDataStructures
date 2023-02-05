#include <iostream>
#include "showticket.h"
using namespace std;

ShowTicket::ShowTicket(string rowin, string seati){
  row = rowin;
  seat = seati;
  sold_st = false;
}

bool ShowTicket::is_sold(){
  return sold_st;
}

void ShowTicket::sell_seat(){
  sold_st = true;
}

string ShowTicket::print_ticket(){
  string status;
  if(sold_st){
    status = "sold";
  }else{
    status = "available";
  }
  return (row+" "+seat+" "+status);
}
