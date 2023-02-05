#include <string>

class ShowTicket{
  
public:
  ShowTicket(std::string,std::string);
  bool is_sold();
  void sell_seat();
  std::string print_ticket();
private:
  std::string row;
  std::string seat;
  bool sold_st;
};
