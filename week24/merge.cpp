void merge(int arr[], int left, int middle, int right){
  int i, j, size, itotal;
  int * mergearr;
  int min1, min2;
  bool end;
  
  size = right-left+1;
  mergearr = new int[size];
  i = 0;
  min1 = left;
  min2 = middle+1;
  end = false;
  
  while(end==false){
    if(arr[min1]<arr[min2]){
      mergearr[i] = arr[min1];
      min1++;
    }else{
      mergearr[i] = arr[min2];
      min2++;
    }
    i++;
    if(min1>middle or min2>right){
      if(min1>middle){
	for(j=i;j<size;j++){
	  mergearr[j] = arr[min2];
	  min2++;
	}
      }else{
	for(j=i;j<size;j++){
          mergearr[j] = arr[min1];
	  min1++;
        }  
      }
      end = true;
    }
  }
  for(i=0, itotal=left; i<size; i++, itotal++)
    arr[itotal] = mergearr[i];
  delete []mergearr;
}
