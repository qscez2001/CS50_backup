#include<cs50.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>


// pseudocode
// get key from commendling argument
// turn key into integer
// prompt for plaintext
// for each character in the plain string
//     preserve case
//     shift plaintext character by key
// print cyphertext

int main(int argc, string argv[])
{
    
    
    if (argc == 2 )
    {
        string sk = argv[1];
        int k = atoi(sk);
        printf("%i\n", k);
        printf("plaintext: ");
        string plaintext = get_string();
        printf("%s\n", plaintext);
        
        for (int i = 0; i < strlen(plaintext); i++)
        {
            if(isalpha(plaintext[i]))
            {
                //printf("%c\n", plaintext[i]);
                
                if(isupper(plaintext[i]))
                {
                    
                    if(k > 26)
                    {
                        k = k % 26;
                    }
                    plaintext[i] = plaintext[i] + k;
                    plaintext[i] = plaintext[i] - 65;
                    plaintext[i] = plaintext[i] % 26;
                    plaintext[i] = plaintext[i] + 65;
                    printf("%c\n", plaintext[i]);
                }
                else
                if(islower(plaintext[i]))
                {
                    
                    if(k > 26)
                    {
                        k = k % 26;
                    }
                    
                    plaintext[i] = plaintext[i] + k;
                    plaintext[i] = plaintext[i] - 97;
                    plaintext[i] = plaintext[i] % 26;
                    plaintext[i] = plaintext[i] + 97;
                    printf("%c\n", plaintext[i]);
                }
                
                
                
            }
            
        }
        printf("ciphertext: %s\n", plaintext);
        return 0;
    }
    
    else
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    
    
    
}