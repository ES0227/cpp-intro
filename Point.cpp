#include "Point.hpp"
#include <cmath>

Point::Point(double x, double y)
{
  this->x = x;
  this->y = y;
}

Point::Point()
{

}

double Point::distance_to_origin()
{
  return std::sqrt(std::pow(this->x, 2)  + std::pow(this->y, 2));
}

double Point::distance_to_point(Point p)
{
  return std::sqrt(std::pow(this->x - p.X(), 2)  + std::pow(this->y - p.Y(), 2));
}

