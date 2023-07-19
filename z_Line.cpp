#include "Line.hpp"

  double length () {
    return p1.distance_to_point(p2);
  };
  /*double distance_to_point (Point p1) {
    line1_slope = (p2.y-p1.y)/(p2.x-p1.x)
    line2_slope = -1/((p2.y-p1.y)/(p2.x-p1.x))
    b1 = p1 
  } */
