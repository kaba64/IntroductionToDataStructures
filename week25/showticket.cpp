#include <iostream>
#include "showticket.h"
using namespace std;

class ShowTicket{
  ShowTicket::ShowTicket(string &rowin , string &seatin, bool sold_st_in){
    row = rowin;
    seat = seatin;
  }
  //ShowTicket::bool is_sold(){
  //  return sold_st;
  //}
  //ShowTicket::void sell_seat(){
  //  sold_st = true;
  //}
  //ShowTicket::string print_ticket(){
  //  string status;
  //  if(sold_st){
  //    status = "sold";
  //  }else{
  //    status = "available";
  //  }
  //  return (row+" "+seat+" "+status);
  //}
};
