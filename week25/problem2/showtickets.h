#include <iostream>
#include <string>

class ShowTickets{
  
public:
  ShowTickets(){
    for(int i=0;i<10;i++){
      sold_st[i] = false;
    }
    count = 0;
  }
  bool is_sold(const std::string rowin, const std::string seatin){
    for(int i=0;i<count;i++){
      if((row[i]==rowin) && (seat[i]==seatin)){
	return sold_st[i];
      }
    }
    return false;
  }
  void sell_seat(const std::string rowin, const std::string seatin){
    row[count] = rowin;
    seat[count] = seatin;
    sold_st[count] = true;
    count+=1;
  }
  std::string print_ticket(const std::string rowin, const std::string seatin){
    std::string status;
    for(int i=0;i<count;i++){
      if((row[i]==rowin) && (seat[i]==seatin)){
        return (row[i]+" "+seat[i]+" sold");
      }
    }
    return (rowin+" "+seatin+" available");
  }
private:
  std::string row[10];
  std::string seat[10];
  bool sold_st[10];
  int count;
};
