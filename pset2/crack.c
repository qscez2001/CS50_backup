#define _XOPEN_SOURCE
#include <unistd.h>
#include<cs50.h>
#include<string.h>
#include<stdio.h>

//can't understandTT
int main(int argc, string argv[])
{
      char *crypt(const char *key, const char *salt);
      
      if (argc == 2) 
      {
            // print the hash
            string hash = argv[1];
            printf("The hash is %s\n", hash);
            
            // print the salt
            char salt [strlen(hash)];
            strcpy(salt, hash);
            salt[2] = 0;
            printf("The salt is %s\n", salt);
            
            // start cracking
            // assumption 1: no longer than four characters
            // assumption 2: composed by entirely of alphabetical characters (case sensitive)
            //string key = "rofl"; // TODO: use a while loop to find out this key.
            //char key[];
            //fail
            //50WUNAFdX/yjA
            //"50WUNAFdX/yjA" stands for "Yale" (Be aware that the key is case sensitive).
            for (int password_length=1; password_length<5; password_length++)
            {
                        switch (password_length)
                        {
                              case 1:
                              {
                                    char key [2];
                                    for (int i = 65; i < 65 + 26; i++)
                                    {
                                          key[0] = (char) i;
                                          key[1] = (char) '\0';
                                          string hash_of_this_key = crypt(key, salt);
                                          printf("%s %s\n", key, hash_of_this_key);
                                          
                                          if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                          {
                                                printf("The password is %s\n", key);
                                                return 0; // use 'return 0' to exit this program
                                          }
                                    }
                                    for (int i = 97; i < 97 + 26; i++)
                                    {
                                          key[0] = (char) i;
                                          key[1] = (char) '\0';
                                          string hash_of_this_key = crypt(key, salt);
                                          printf("%s %s\n", key, hash_of_this_key);
                                          
                                          if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                          {
                                                printf("The password is %s\n", key);
                                                return 0; // use 'return 0' to exit this program
                                          }
                                    }
                                    break; // use 'break' to end case 1
                              }
                              case 2:
                              {
                                    char key[3];
                                    for (int i = 65; i < 65 + 26; i++)
                                    {
                                          key[0] = (char) i;
                                          for (int j = 65; j < 65 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                key[2] = (char) '\0';
                                                string hash_of_this_key = crypt(key, salt);
                                                printf("%s %s\n", key, hash_of_this_key);
                                                
                                                if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                {
                                                      printf("The password is %s\n", key);
                                                      return 0; // use 'return 0' to exit this program
                                                }
                                          }
                                          for (int j = 97; j < 97 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                key[2] = (char) '\0';
                                                string hash_of_this_key = crypt(key, salt);
                                                printf("%s %s\n", key, hash_of_this_key);
                                                
                                                if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                {
                                                      printf("The password is %s\n", key);
                                                      return 0; // use 'return 0' to exit this program
                                                }
                                          }
                                    }
                                    for (int i = 97; i < 97 + 26; i++)
                                    {
                                          key[0] = (char) i;
                                          for (int j = 65; j < 65 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                key[2] = (char) '\0';
                                                string hash_of_this_key = crypt(key, salt);
                                                printf("%s %s\n", key, hash_of_this_key);
                                                
                                                if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                {
                                                      printf("The password is %s\n", key);
                                                      return 0; // use 'return 0' to exit this program
                                                }
                                          }
                                          for (int j = 97; j < 97 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                key[2] = (char) '\0';
                                                string hash_of_this_key = crypt(key, salt);
                                                printf("%s %s\n", key, hash_of_this_key);
                                                
                                                if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                {
                                                      printf("The password is %s\n", key);
                                                      return 0; // use 'return 0' to exit this program
                                                }
                                          }
                                    }
                                    break; // use 'break' to end case 2
                              }
                              case 3:
                              {      
                                    char key[4];
                                    for (int i = 65; i < 65 + 26; i++)
                                    {
                                          key[0] = (char) i;
                                          for (int j = 65; j < 65 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                for (int a = 65; a < 65 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      key[3] = (char) '\0';
                                                      string hash_of_this_key = crypt(key, salt);
                                                      printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                      if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                      {
                                                            printf("The password is %s\n", key);
                                                            return 0; // use 'return 0' to exit this program
                                                      }
                                                }
                                                for (int a = 97; a < 97 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      key[3] = (char) '\0';
                                                      string hash_of_this_key = crypt(key, salt);
                                                      printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                      if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                      {
                                                            printf("The password is %s\n", key);
                                                            return 0; // use 'return 0' to exit this program
                                                      }
                                                }
                                          }
                                          for (int j = 97; j < 97 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                for (int a = 65; a < 65 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      key[3] = (char) '\0';
                                                      string hash_of_this_key = crypt(key, salt);
                                                      printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                      if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                      {
                                                            printf("The password is %s\n", key);
                                                            return 0; // use 'return 0' to exit this program
                                                      }
                                                }
                                                for (int a = 97; a < 97 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      key[3] = (char) '\0';
                                                      string hash_of_this_key = crypt(key, salt);
                                                      printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                      if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                      {
                                                            printf("The password is %s\n", key);
                                                            return 0; // use 'return 0' to exit this program
                                                      }
                                                }
                                          }
                                    }
                                    for (int i = 97; i < 97 + 26; i++)
                                    {
                                          key[0] = (char) i;
                                          for (int j = 65; j < 65 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                for (int a = 65; a < 65 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      key[3] = (char) '\0';
                                                      string hash_of_this_key = crypt(key, salt);
                                                      printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                      if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                      {
                                                            printf("The password is %s\n", key);
                                                            return 0; // use 'return 0' to exit this program
                                                      }
                                                }
                                                for (int a = 97; a < 97 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      key[3] = (char) '\0';
                                                      string hash_of_this_key = crypt(key, salt);
                                                      printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                      if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                      {
                                                            printf("The password is %s\n", key);
                                                            return 0; // use 'return 0' to exit this program
                                                      }
                                                }
                                          }
                                          for (int j = 97; j < 97 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                for (int a = 65; a < 65 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      key[3] = (char) '\0';
                                                      string hash_of_this_key = crypt(key, salt);
                                                      printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                      if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                      {
                                                            printf("The password is %s\n", key);
                                                            return 0; // use 'return 0' to exit this program
                                                      }
                                                }
                                                for (int a = 97; a < 97 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      key[3] = (char) '\0';
                                                      string hash_of_this_key = crypt(key, salt);
                                                      printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                      if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                      {
                                                            printf("The password is %s\n", key);
                                                            return 0; // use 'return 0' to exit this program
                                                      }
                                                }
                                          }
                                    }
                                    break; // use 'break' to end case 3
                              }
                              case 4:
                              {      
                                    char key[5];
                                    for (int i = 65; i < 65 + 26; i++)
                                    {
                                          key[0] = (char) i;
                                          for (int j = 65; j < 65 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                for (int a = 65; a < 65 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      for (int b = 65; b < 65 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                      for (int b = 97; b < 97 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                            
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                }
                                                for (int a = 97; a < 97 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      for (int b = 65; b < 65 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                      for (int b = 97; b < 97 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                            
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                }
                                          }
                                          for (int j = 97; j < 97 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                for (int a = 65; a < 65 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      for (int b = 65; b < 65 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                      for (int b = 97; b < 97 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                            
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                }
                                                for (int a = 97; a < 97 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      for (int b = 65; b < 65 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                      for (int b = 97; b < 97 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                            
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                }
                                          }
                                    }
                                    for (int i = 97; i < 97 + 26; i++)
                                    {
                                          key[0] = (char) i;
                                          for (int j = 65; j < 65 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                for (int a = 65; a < 65 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      for (int b = 65; b < 65 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                      for (int b = 97; b < 97 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                            
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                }
                                                for (int a = 97; a < 97 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      for (int b = 65; b < 65 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                      for (int b = 97; b < 97 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                            
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                }
                                          }
                                          for (int j = 97; j < 97 + 26; j++)
                                          {
                                                key[1] = (char) j;
                                                for (int a = 65; a < 65 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      for (int b = 65; b < 65 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                      for (int b = 97; b < 97 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                            
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                }
                                                for (int a = 97; a < 97 + 26; a++)
                                                {
                                                      key[2] = (char) a;
                                                      for (int b = 65; b < 65 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                      
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                      for (int b = 97; b < 97 + 26; b++)
                                                      {
                                                            key[3] = (char) b;
                                                            key[4] = (char) '\0';
                                                            string hash_of_this_key = crypt(key, salt);
                                                            printf("%s %s\n", key, hash_of_this_key);
                                                            
                                                            if ( strcmp(hash_of_this_key, hash) == 0 ) 
                                                            {
                                                                  printf("The password is %s\n", key);
                                                                  return 0; // use 'return 0' to exit this program
                                                            }
                                                      }
                                                }
                                          }
                                    }
                                    break; // use 'break' to end case 4
                              }
                        }
                  }
            
            printf("Failed to crack.\n");
            return 1; // use 'return 0' to exit this program
            
            // if ( strcmp(crypt(key, salt), hash) == 0 ) {
            //       // print password
            //       printf("The password is %s\n", key);
            // }
            // else {
            //       // keep cracking
            //       printf("keep cracking ...");
            // }
      }
      else 
      {
            // print usage
            printf("Usage: ./crack hash\n");
            return 1;
      }
      
      
}

