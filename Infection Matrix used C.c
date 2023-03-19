#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <windows.h> 

int main()
{

    printf ("JimmyStevenStudio, Coded by lky473736.\n");

    Sleep (5000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    puts ("3");
    Sleep (1000);
    puts ("2");
    Sleep (1000);
    puts ("1");
    Sleep (1000);
    int a = 2;
    while (a<103000)
    {
    	(unsigned)time(NULL);
    	int random = rand();
        printf ("%d", random);
        a = a+1;
    }
    
    
    Sleep (2000);
    
    int t = 0;
    
    while (t < 4)
    {
    if (t == 0)
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
    
    else if (t == 1)
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
    
    else if (t >= 2)
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
    
    else 
    return 0;
    
    printf ("\n");
    printf ("\n");
    printf ("\n");


    Sleep (5000);


    char virus [20] [20] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,2,2,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,2,0,2,0},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,2,2},
                            {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,2,0,0,2},
							};

    
    int i,j, ran_num = 0;
    srand ((unsigned)time (NULL) );
    
    for (i=0; i<20; i++)
    {
    	
        for (j=0; j<20; j++)
        {
            ran_num = rand() % 2;

            if ( virus [i][j] == 0 )
            {
                printf ("%s", tmp_1); 
            }

            else if (ran_num == 0 && virus [i][j] == 1 )
            {
                printf ("%s", tmp_1); 
            }
            else if (ran_num == 1 && virus [i][j] == 2 )
            {
                printf ("X "); 
            }
            else
            {
                printf ("X ");
            }
        }
        printf ("\n");
    }
    
    t = t+1;
    }
    return 0;
}
