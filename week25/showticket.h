#include <string>

class ShowTicket{
  
public:
  ShowTicket(const std::string &, const std::string &, bool=false);
  //bool is_sold();
  //void sell_seat();
  //std::string print_ticket();
private:
  std::string row;
  std::string seat;
  bool sold_st;
};
