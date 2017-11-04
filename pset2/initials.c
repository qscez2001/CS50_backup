#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    printf("Your name: ");
    string name = get_string();
    //printf("%s\n", name);
    int n = strlen(name);
    printf("%i\n", n);
    
    bool is_blank = true;
    for (int i = 0; i < n; i++)
    {
        if (name[i] != ' ')
        {
            if (is_blank) {
                name[i] = toupper(name[i]);
                printf("%c", name[i]);
            }
            is_blank = false;
        }
        else 
        {
            is_blank = true;
        }
    }
    
    printf("\n");

}