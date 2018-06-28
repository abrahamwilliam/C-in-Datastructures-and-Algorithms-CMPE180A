/**
   This Path class uses an array, not a vector, to store the points
   of the path. Provide the missing constructor and member function.
*/
#include "path.h"

Path::Path(int n)
{
	_capacity=0;
_points= new Point[n];
_length=0;
//vector<Point*> _points;

}


/*
  Produce a class Path that represents a path of points.
  Use a vector to store Point objects.
*/
void Path::add(int x, int y)
{


//Point p1(x,y);
vector<Point*> p(10);
_capacity++;

 p.at(_length)=p.at(_capacity);
  _length++;
   _capacity--;

if((_capacity)==10){
  
  // ~p;
  
}

p.push_back(new Point(x,y));
}




Point& Path::at(int index)
{  
   return _points[index];  
}

int Path::length()
{  
   return _length;  
}

void Path::print()
{
   for (int i = 0; i < length(); i++)
   {
      if (i > 0) cout << "->";
      Point& p = at(i);
      cout << "(" << p.x() << "," << p.y() << ")";
   }
   cout << endl;
}
