#include <stdio.h>

float square_area(float side);
float circle_area(float radius);
float rectangle_area(float a, float b);

int main()
{
  float a = 2.0;
  float b = 2.0;
  printf(" area is :%f\n", rectangle_area(a, b));

  float side = 5;
  printf("area is %f\n", square_area(side));

  float radius = 2;
  printf("area is %f", circle_area(radius));

  return 0;
}

float square_area(float side)
{

  return side * side;
}

float circle_area(float radius)
{

  return 3.14 * radius * radius;
}

float rectangle_area(float a, float b)
{

  return a * b;
}