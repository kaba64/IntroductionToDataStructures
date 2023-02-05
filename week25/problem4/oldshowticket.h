#include <string>

class ShowTicket{
  
public:
  ShowTicket();
  bool is_sold();
  void sell_seat();
  std::string print_ticket();
private:
  std::string row;
  std::string seat;
  bool sold_st;
};
