#include <cmath>
#include "Point.hpp"
#include "Line.hpp"

double area() {
    double side1 = sqrt (pow(p1.X() - p2.X(), 2) + pow(p1.Y() - p2.Y(), 2));
    double side2 = sqrt (pow(p2.X() - p3.X(), 2) + pow(p2.Y() - p3.Y(), 2));
    double side3 = sqrt (pow(p3.X() - p1.X(), 2) + pow(p3.Y() - p1.Y(), 2));
    double semi = (side1 + side2 + side3) / 2;
    return sqrt (semi * (semi - side1) * (semi - side2) * (semi - side3));
  };

