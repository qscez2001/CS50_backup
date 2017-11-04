/**
 * fifteen.c
 *
 * Implements Game of Fifteen (generalized to d x d).
 *
 * Usage: fifteen d
 *
 * whereby the board's dimensions are to be d x d,
 * where d must be in [DIM_MIN,DIM_MAX]
 *
 * Note that usleep is obsolete, but it offers more granularity than
 * sleep and is simpler to use than nanosleep; `man usleep` for more.
 */

#define _XOPEN_SOURCE 500

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

// constants
#define DIM_MIN 3
#define DIM_MAX 9

// board
int board[DIM_MAX][DIM_MAX];

// dimensions
int d;

// prototypes
void clear(void);
void greet(void);
void init(void);
void draw(void);
bool move(int tile);
bool won(void);

int main(int argc, string argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: fifteen d\n");
        return 1;
    }

    // ensure valid dimensions
    d = atoi(argv[1]);
    if (d < DIM_MIN || d > DIM_MAX)
    {
        printf("Board must be between %i x %i and %i x %i, inclusive.\n",
            DIM_MIN, DIM_MIN, DIM_MAX, DIM_MAX);
        return 2;
    }

    // open log
    FILE *file = fopen("log.txt", "w");
    if (file == NULL)
    {
        return 3;
    }

    // greet user with instructions
    greet();

    // initialize the board
    init();

    // accept moves until game is won
    while (true)
    {
        // clear the screen
        //clear();

        // draw the current state of the board
        draw();

        // log the current state of the board (for testing)
        for (int i = 0; i < d; i++)
        {
            for (int j = 0; j < d; j++)
            {
                fprintf(file, "%i", board[i][j]);
                if (j < d - 1)
                {
                    fprintf(file, "|");
                }
            }
            fprintf(file, "\n");
        }
        fflush(file);

        // check for win
        if (won())
        {
            printf("ftw!\n");
            break;
        }

        // prompt for move
        printf("Tile to move: ");
        int tile = get_int();

        // quit if user inputs 0 (for testing)
        if (tile == 0)
        {
            break;
        }

        // log move (for testing)
        fprintf(file, "%i\n", tile);
        fflush(file);

        // move if possible, else report illegality
        if (!move(tile))
        {
            printf("\nIllegal move.\n");
            usleep(500000);
        }

        // sleep thread for animation's sake
        usleep(500000);
    }

    // close log
    fclose(file);

    // success
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
/**
 * Clears screen using ANSI escape sequences.
 */
void clear(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

/**
 * Greets player.
 */
void greet(void)
{
    clear();
    printf("WELCOME TO GAME OF FIFTEEN\n");
    usleep(20000);
    //usleep(2000000);
}

/**
 * Initializes the game's board with tiles numbered 1 through d*d - 1
 * (i.e., fills 2D array with values but does not actually print them).
 */
void init(void)
{
    // TODO
    int k = 1;
    for (int i=0;i<d;i++)
    {
        //printf("i = %i\n", i);
        for (int j=0;j<d;j++)
        {
            //printf("j = %i\n", j);
            board[i][j] = d*d - k;
            //printf("i=%i, j=%i, board=%i\n", i, j, board[i][j]);
            k = k + 1;
        }
    }
    // for each row
    //     for each column
    //         set value for tile

    if (d % 2 == 0)
    {
        swap(&board[d-1][d-2], &board[d-1][d-3]);
    }

}


/**
 * Prints the board in its current state.
 */
void draw(void)
{
    // TODO
    // for each row
    //     for each column
    //         set value for tile
    //     print new line


    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            // if (board[i][j] == 0)
            // {
            //     board[i][j] = '_';
            // }
            if ( board[i][j] == 0 )
            {
                printf("__\t");
            }
            else {
                printf("%2d\t", board[i][j]);
            }
        }
        putchar('\n');
    }

}

/**
 * If tile borders empty space, moves tile and returns true, else
 * returns false.
 */
bool move(int tile)
{
    // TODO
    //v given: tile number
    //v find the tile location
    //v edit the board array
    //v (only if the move islegal)
    //v swap tile and blank tile
    //v keep track of blank tile location
    // use 2 variables

    // keep track of blank tile location
    int numberofrow;
    int numberofcolumn;
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            if (board[i][j] == 0)
            {
                numberofrow = i;
                numberofcolumn = j;
            }
        }
    }

    // find the tile location
    for(int i = 0; i < d; i++)
    {
        for(int j = 0; j < d; j++)
        {
            if (board[i][j] == tile)
            {
                //printf("i=%i,j=%i\n", i, j);
                // (only if the move islegal)
                if ((abs(numberofrow - i) + abs(numberofcolumn - j)) <= 1)
                {
                    // swap tile and blank tile
                    swap(&board[i][j], &board[numberofrow][numberofcolumn]);
                    printf("%i\n", board[i][j]);
                    return true;
                }
            }
        }
    }

    return false;
}

/**
 * Returns true if game is won (i.e., board is in winning configuration),
 * else false.
 */
bool won(void)
{
    // TODO
    //if won >> return true
    //when increase order
    //left to right. up to down
    //1 2 3
    //4 5 6
    //7 8

    //iterate board and check values
    //if any incorrect return false
    //return true while all tiles are checked

    // This is the code written by CC
    if ( board[0][0] == 0 ) return false;

    int the_previous_value = -1;
    for(int i = 0; i < d; i++) {
        for(int j = 0; j < d; j++) {
            if ( i == d-1 && j == d-1 ) return true;

            if ( board[i][j] < the_previous_value ) {
                // printf("[DEBUG] the_previous_value = %d\n", the_previous_value);
                return false;
            }
            else {
                the_previous_value = board[i][j];
            }
        }
    }

    // This is the code written by YUYU
    /*
    for(int i = -1; i < d-1; i++)
    {
        for(int j = 0; j < d; j++)
        {
            //printf("i=%i, j=%i\n", i, j);
            if (board[i][j]>board[i][j+1]) return false;
            if (board[i][j]>board[i+1][j]) return false;
        }
    }

    for(int i = 0; i < d; i++)
    {
        for(int j = -1; j < d-1; j++)
        {
            //printf("i=%i, j=%i\n", i, j);
            if (board[i][j]>board[i][j+1]) return false;
            if (board[i][j]>board[i+1][j]) return false;
        }
    }*/

    return true;
}
