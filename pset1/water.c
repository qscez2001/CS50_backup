#include <stdio.h>
#include<cs50.h>

int main(void)
{
   printf("Minutes: ");
   int minutes;
   do
   {
   minutes = get_int();
   }
   while (minutes <= 0);
   
   int bottles = minutes * 12;
   printf("Bottles: %i\n", bottles);
}