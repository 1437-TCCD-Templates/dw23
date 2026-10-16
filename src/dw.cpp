#include "dw.h"

double Shape::area() const { return 0.0; }

Shape::~Shape() {}

Circle::Circle(double radius) { m_radius = radius }

double Circle::area() {
  return 3.14159 * m_radius * m_radius
