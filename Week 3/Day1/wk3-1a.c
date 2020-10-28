#include <stdio.h>
#include <stdlib.h>

int main ()
{

const char *str1 = "123.79";
const char *str2 = "55";
float x;
int y;

printf("String 1 is %s \n", str1);
printf("String 2 is %s \n", str2);

x = atof(str1);
y = atoi(str2);

printf("String 1 is %.2f \n", x);
printf("String 2 is %d \n", y);

return 0;

}
