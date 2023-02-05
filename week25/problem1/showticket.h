#include <iostream>
#include <string>
class ShowTicket{ 
public:                                                                                                                                     
  ShowTicket(const std::string rowin, const std::string seati){ 
    row = rowin;                                                                                                                            
    seat = seati;
    sold_st = false;
  };                                                                                                                                        
  bool is_sold(){ 
    return sold_st; 
  }                                                                                                                                         
  void sell_seat(){
    sold_st = true;
  }    
  std::string print_ticket(){
    std::string status; 
    if(sold_st){
      status = "sold"; 
    }else{
      status = "available";       
    } 
    return (row+" "+seat+" "+status);                                                                                                        
  }                                                                                                                                         
private: 
  std::string row; 
  std::string seat; 
  bool sold_st;
};
