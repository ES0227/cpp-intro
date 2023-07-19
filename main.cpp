#include <iostream>
#include <math.h> 
#include <vector>
#include <array>
#include "Point.hpp"

using namespace std;

int subtract(int x, int y) {
  return x-y;
}

int multiply(int x, int y) {
  return x * y;
}

int divide(int x, int y) {
  return x/y;
}

class Circle {
  public: 
    int radius;
    int area; 
    void print() {
      std::cout << "The area of the circle is " << M_PI*pow(radius, 2) << std::endl;
  }
};



class Line {
  public:
  Point p1, p2;

  double length () {
    return p1.distance_to_point(p2);
  };
  /*double distance_to_point (Point p1) {
    line1_slope = (p2.y-p1.y)/(p2.x-p1.x)
    line2_slope = -1/((p2.y-p1.y)/(p2.x-p1.x))
    b1 = p1 
  } */
};

class Triangle {
public:
  Point p1, p2, p3;

  double area() {
    double side1 = sqrt (pow(p1.X() - p2.X(), 2) + pow(p1.Y() - p2.Y(), 2));
    double side2 = sqrt (pow(p2.X() - p3.X(), 2) + pow(p2.Y() - p3.Y(), 2));
    double side3 = sqrt (pow(p3.X() - p1.X(), 2) + pow(p3.Y() - p1.Y(), 2));
    double semi = (side1 + side2 + side3) / 2;
    return sqrt (semi * (semi - side1) * (semi - side2) * (semi - side3));
  }

};

class Polygon {
  public:
    std::vector<Point> points;
  
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
};

  class AUV {
    private:
    std::string name;
    Point position;
    double depth;
    double heading;
    std::array <double, 3> speed;
    double angular_speed; 
    
    AUV(std::string n, Point p, double d, double h, array <double, 3> s, double angular_speed, double a_s) {
      name = n;
      position = p;
      depth = d;
      heading = h;
      speed = s;
      angular_speed = a_s;

      }
    
    void step(const double& dt) {
      position.x += speed[0] * dt;
      position.y += speed[1] * dt;
      depth += speed[2] * dt;
    }

    void apply_accleration (array<double, 3> a, double dt) {
      speed[0] += a[0] * dt;
      speed[1] += a[1] * dt;
      speed[2] += a[2] * dt;
    }

    void apply_angular_acceleration(double angular_acceleration, double dt) {
      angular_speed += angular_acceleration * dt;
      heading += angular_speed *dt;

    }

  };
  

 

int main() {
  std::cout << "Erin, 115" << std::endl;

  int x = 10;
  int y = 5;
  int z = 12;
  int w = 4;
  int v = 2;

  std::cout << "The sum of " << x << " and " << y << " is " << z << std::endl;
  std::cout << "The product of " << x << " and " << y << " and " << z << " and " << w << " is " << x*y*z*w << std::endl;
  std::cout << "The quotient of " << x << " and " << y << " and " << v << " is " << x/y/v<<std::endl;
  
  std::cout << (multiply (2, 3)) << std::endl;

  Circle e;
  e.radius = 5;
  e.print();

  Triangle erin;
    erin.p1 = Point(3, 4);
    erin.p2 = Point(4, 5);
    erin.p3 = Point(1, 3);
    double triangleArea = erin.area();
    std::cout << "Triangle Area: " << triangleArea << std::endl;
   


  Polygon g;

    
     g.points = {Point(0,1), Point(1,2), Point(2, 2), Point (3,1), Point(2,0), Point (1,0)}; 
    double finalArea = g.allTriArea(g.points);
    std::cout << "the area of the polygon is " << finalArea << std::endl;

 

  double perimeterLength = g.perimeter(g.points);
  std::cout << "the perimeter of this polygon is " << perimeterLength << std::endl;


  return 0;
}