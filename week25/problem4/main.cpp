#include <iostream>
#include <string>

using namespace std;

class ShowTicket{
public:
  ShowTicket(const std::string rowin, const std::string seati){
    row = rowin;
    seat = seati;
    sold_st = false;
  }
  bool is_sold(){
    return sold_st;
  }
  void sell_seat(){
    sold_st = true;
  }
  virtual std::string print_ticket(){
    std::string status;
    if(sold_st){
      status = "sold";
    }else{
      status = "available";
    }
    return (row+" "+seat+" "+status);
  }
protected:
  bool sold_st;
  std::string row;
  std::string seat;
};
class SportTicket : public ShowTicket{
public:
  SportTicket(const std::string rowin, const std::string seatin)
    :ShowTicket(rowin,seatin)
  {
    beer_st=false;
  }
  
  bool beer_sold(){
    if(sold_st){
      return true;
    }
    return false;
  }
  void sell_beer(){
    beer_st=true;
  }
  std::string print_ticket(){
    std::string status_s,status_b;
    if(sold_st){
      status_s = "sold";
    }else{
      status_s = "available";
    }
    if(beer_st){
      status_b = "beer";
    }else{
      status_b = "nobeer";
    }
    return (row+" "+seat+" "+status_s+" "+status_b);
  }
  private:
  bool beer_st;
};

class TicketSales{
public:
  std::string print_ticket(ShowTicket *myticket){
    return myticket->print_ticket();
  }
};

int main () {
  TicketSales ts;
  ShowTicket myticket1("AA","101");
  SportTicket myticket2("AA","103");
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << ts.print_ticket(&myticket1)<<std::endl;
  cout << ts.print_ticket(&myticket2)<<std::endl;
  return 0;
}
