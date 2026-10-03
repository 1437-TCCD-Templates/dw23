#include "dw.h"

double Shape::area() const { return 0.0; }

Shape::~Shape() {}

Circle::Circle(double radius) { radius_ = radius }

double Circle::area() {
  return 3.14159 * radius_ * radius_
