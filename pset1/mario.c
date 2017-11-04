#include <stdio.h>
#include<cs50.h>

int main(void)
{

    //ask user for key-in
    int height;
    do
    {
    printf("Height: ");
    height = get_int();
    }
    while (height > 23 || height < 0);
    
    //print 4 words
    int width = height;
    do
    {
        //left side of pyramid
        for (int i = 1; i < height; i++)
        { 
        printf(" ");
        }
        
        int hash = width - height;
        for (int i = 0; i <= hash; i++)
        { 
        printf("#");
        }
        
        printf("  ");
        
        //right side of pyramid
        for (int i = 0; i <= hash; i++)
        { 
        printf("#");
        }
        
        for (int i = 1; i < height; i++)
        { 
        printf(" ");
        }
        
        printf("\n");
        
        height--;
    }
    while(height > 0);
}