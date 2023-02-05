double* getDoubles(int numDoubles){
  int i;
  double * ptr;
  ptr = new double[numDoubles];
  for(i=0;i<numDoubles;i++)
    ptr[i] = (double)(i+1)/(double)3;
  
  return ptr;
}
