#include <stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
   
   int height = 4;
   int width = height;
   do
   {
      int left = height;
      int left2 = width - left;
      for (;left>1;left--)
      {
         printf(" ");
      }
      do
      {
         printf("#");
         left2--;
      }
      while(left2>-1);
      
      printf("  ");
      
      int right = height;
      int right2 = width - right;
      do
      {
         printf("#");
         right2--;
      }
      while(right2>-1);
      
      printf("\n");
      height--;
   }
   while (height > 0);
}