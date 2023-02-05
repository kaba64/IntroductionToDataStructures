int binary_search(int search_value, int lst[], int elements){
  int i, start, end, ind;
  bool found;
  
  found = false;
  start = 0;
  end = elements;
  i = 0;
  
  while(found==false && (start<=end)){
    ind = (start+end)/2;
    i+=1;
    if(lst[ind]==search_value){  
      found = true;
    }else if(lst[ind]<search_value){
      start = ind + 1;
    }else if(lst[ind]>search_value){
      end = ind - 1;
    }
  }
  return i;
}
