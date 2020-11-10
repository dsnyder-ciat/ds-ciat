#include <stdio.h>

float revenue(float *, float *);

int main()
{

  float price, quant, rev;

  printf("Enter price of item: \n");
  scanf("%f", &price);
  printf("Enter quantity of item: \n");
  scanf("%f", &quant);

  rev = revenue(&price, &quant);
  printf("Total revenue for item is $%.2f\n", rev);

  return 0;

}

float revenue(float *price, float *quantity)
{
  float total_rev = (*price)*(*quantity);
  return total_rev;
}
