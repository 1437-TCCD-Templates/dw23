#ifndef DW_H
#define DW_H

class Shape {
public:
  virtual double area() const;
  virtual ~Shape();
};

class Circle : public Shape {
public:
  Circle(double radius);
  double area() const override;

private:
  double radius_;
};

#endif
