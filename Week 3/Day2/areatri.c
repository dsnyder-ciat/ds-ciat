#include <stdio.h>

int areaTri(int *, int *);
int base, height, aTri;

int main()
{
  printf("Enter base: \n");
  scanf("%d", &base);
  printf("Enter height: \n");
  scanf("%d", &height);

  aTri = areaTri(&base, &height);
  printf("Result is: %d\n", aTri);

  return 0;

}

int areaTri(int *base, int *height)
{
  int area = 0.5**base**height;
  return area;
}
