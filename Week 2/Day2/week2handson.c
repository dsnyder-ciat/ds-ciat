#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define pi 3.14159

int triArea(int, int);
int rectArea(int, int);
float circleArea(float);

int main()
{
  int base = 5, height = 7, side1 = 4, side2 = 9;
  float radius = 1.4;

  int areaTri = triArea(base, height);
  printf("Triangle area is %d \n", areaTri);

  int areaRect = rectArea(side1, side2);
  printf("Rectangle area is %d \n", areaRect);

  float areaCircle = circleArea(radius);
  printf("Circle area is %f", areaCircle);

  return 0;
}

int triArea(int base, int height)
{

  int area = 0.5*base*height;
  return area;

}

int rectArea(int side1, int side2)
{

  int area = side1*side2;
  return area;

}
float circleArea(float radius)
{
  float area = 2*pi*radius;
  return area;
}
