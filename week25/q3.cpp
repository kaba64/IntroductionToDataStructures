#include <iostream>
using namespace std;

class Polygon{
protected:
  int width, hight;
public:
  void set_values(int a, int b)
  {width=a; hight=b;}
  int area () const = 0;
};

class Rectangle: public Polygon{
public:
  int area ()
  {return width*hight;}
};

