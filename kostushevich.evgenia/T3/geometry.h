#ifndef _GEOMETRY_H
#define _GEOMETRY_H

#include <vector>
#include <cmath>
#include <numeric>
#include <stdexcept>
#include <algorithm>

namespace kostushevich
{
  struct Point
  {
    int x, y;
    bool operator==(const Point &other) const;
    bool operator!=(const Point &other) const;
  };

  struct Polygon
  {
    std::vector< Point > points;
    double getArea() const;
    bool operator<(const Polygon &other) const;
    bool operator==(const Polygon &other) const;
    bool operator!=(const Polygon &other) const;
  };

  struct Triangle
  {
    Point a, b, c;
    Triangle(const Point &a, const Point &b, const Point &c);
    double getArea() const;
  };

  double getDistance(const Point &p1, const Point &p2);
}
#endif
