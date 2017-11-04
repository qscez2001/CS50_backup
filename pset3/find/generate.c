/**
 * generate.c
 *
 * Generates pseudorandom numbers in [0,MAX), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
//These functions generate pseudo-random numbers using the linear congruential algorithm and 48-bit integer arithmetic.
//The drand48() and erand48() functions return nonnegative double-precision floating-point values uniformly distributed between [0.0, 1.0).
//The  srand48(),  seed48()  and  lcong48()  functions  are  initialization  functions, one of which should be called before using drand48()

 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// upper limit on range of integers that can be generated
#define LIMIT 65536

int main(int argc, string argv[])
{
    // TODO: this program expects one or two command-line arguments.
    if (argc != 2 && argc != 3)
    {
        printf("Usage: ./generate n [s]\n");
        return 1;
    }

    // TODO: convert string to int
    int n = atoi(argv[1]);

    // TODO: if applyed, will see the same "random" sequence of ten numbers again
    if (argc == 3)
    {
        srand48((long) atoi(argv[2]));
    }
    else
    {
        srand48((long) time(NULL));
    }

    // TODO: The drand48() functions return nonnegative double-precision floating-point values uniformly distributed between [0.0, 1.0).

    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}
