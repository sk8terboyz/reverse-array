#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;
  int nums[10];
  int i = 0;

  printf("Enter 10 numbers for the array\n");

  while(i != 10)
  {
    scanf("%d", &nums[i]);
    i++;
  }
  //opening file to write to
  fp = fopen("reverseOrder.txt","w");

  printf("\nYour numbers in reverse order are : ");
  //printing files to console and file
  while(i > 0)
  {
    i--;
    if(i == 0)
    {
      printf("%i", nums[i]);
    }
    else
    {
      printf("%i, ", nums[i]);
    }
    fwrite(nums, 1, 10, fp);
  }
  //move onto the next line
  printf("\n");
  //close file
  fclose(fp);

  return 0;
}
