// Build a program that creates a Macro to calculate the area of a circle
// using the formula Area = Pi * r2(area = pi x radius x radius)
// In the same program, prompt the user to enter a circle's radius.
// Use the macro to calculate the circle's area and display the result

#include <stdio.h>
#include <stdlib.h>

float circleArea(float);
float radius;
float pi = 3.14;

int main()
{
  printf("Enter the radius of a circle: ");
  scanf("%f", &radius);

  float areaCircle = circleArea(radius);
  printf("Circle area is %.f", areaCircle);

  return 0;
}

float circleArea(float radius)
{
  float area = pi*radius*radius;
  return area;
}
