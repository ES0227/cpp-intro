#pragma once

class Point
{
public:
  double x;
  double y;

public:
  Point(double x, double y);
  Point();

  double X(){ return x; }
  double Y(){ return y; }
  double distance_to_origin();
  double distance_to_point(Point p);
};