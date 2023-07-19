#include "z_Polygon.hpp"
#include <cmath>
#include <vector>
#include "z_Triangle.cpp"
#include "z_Triangle.hpp"


double areaSum = 0;
  double allTriArea (std::vector<Point> points) {
    for (int i = 0; i < points.size() - 2; i++) {
      Triangle triangle;
      triangle.p1 = points[0];
      triangle.p2 = points[i+1];
      triangle.p3 = points[i+2];
      areaSum += triangle.area();

  }
    return areaSum;
  }

  double perimeter(std::vector<Point> points) {
    double Perimeter = 0;
    for (int i = 0; i < points.size()-1; i++) {
      Perimeter += points[i].distance_to_point (points[i+1]);
    }
      Perimeter += points[0].distance_to_point(points[points.size()-1]);
    return Perimeter;
  }