int linear_search(int search_value, int lst[], int elements){
  int iter;
  iter = 0;

    for(iter=0;iter<elements;iter++){
      if(search_value==lst[iter])
	return (iter+1);
    }
  return (iter+1);
}
