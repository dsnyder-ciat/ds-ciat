#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  FILE *pWrite;

  int cubicNum[255];

  pWrite = fopen("/Users/dsnyder/Desktop/ciatgit/ASD101-22/Week 4/test.txt", "w");

  if (pWrite == NULL)
    {
      printf("File not found.\n");
    }

  else
  {
    fprintf(pWrite, "This is testing for fprintf...\n");
    fprintf(pWrite, "Following will be all cubic numbers < 1000...\n");

    for (int cubicNum=1; cubicNum<=10; cubicNum++)
    {
      fprintf(pWrite, "%d ", cubicNum*cubicNum*cubicNum );
    }

  }

  fclose(pWrite);
  pWrite = fopen("/Users/dsnyder/Desktop/ciatgit/ASD101-22/Week 4/test.txt", "r");

  if (pWrite == NULL)
    {
      printf("File not found.\n");
    }

    else
    {

      fgets(cubicNum, 255, (FILE*)pWrite);
      printf("%s", cubicNum);

      fgets(cubicNum, 255, (FILE*)pWrite);
      printf("%s", cubicNum);

      fgets(cubicNum, 255, (FILE*)pWrite);
      printf("%s", cubicNum);

    }

    fclose(pWrite);

    return 0;

}


// Print Cube Numbers : https://bit.ly/3l1uOin

// PROGRAM BRIEF
