#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main();
int map[50][50] = {0};
int command;
int direction = 0; // 1 turn right, 2 is turn left, 5 and 10 are move forward 10 spaces
int pen;
int posx = 0;
int posy = 0;

void forward(int x)
{
	if(pen == 0)
	{
		for(int i=0; i<x; i++)
		{
			if (direction % 4 == 0)
			{
			    posy++;
			    map[posx][posy] = 1;
			}
			else if (direction % 4 == 1 || direction % 4 == -1)
			{
			    posx++;
			    map[posx][posy] = 1;
			} 
			else if (direction % 4 == 2 || direction % 4 == -2)
			{
			    posy--;
    			    map[posx][posy] = 1;
    		}
    		else if (direction % 4 == 3 || direction % 4 == -3)
			{
			    posx--;
    			    map[posx][posy] = 1;
    		}
		}
	}
	main();
}


int main() 
{
	printf("Please enter command for turtle: ");
	scanf("%d", &command);
	switch(command) 
	{
	    int x;
	    case 1: // pen up
	        pen = 1;
	        printf("Pen is now up\n");
			main();
	    case 2: // pen down
	        pen = 0;
	        printf("Pen is now down\n");
	        main();
	    case 3: // turn right
	        direction++;
	        main();
	    case 4: // turn left
	        direction--;
	        main();
	    case 5: // move forward
	        printf("Please enter number of spaces you'd like to more forward: ");
	        scanf("%d", &x);
	        forward(x);
	    case 10: // move forward
	        printf("Please enter number of spaces you'd like to more forward: ");
	        scanf("%d", &x);
	        forward(x);
	    case 6: // print array
    	    for (int x = 0; x < 50; x++)
    	    {
    	        for (int y = 0; y < 50; y++)
    	        {
    	            if(map[x][y] == 1)
    	            {
    				    printf("*");
    			    } else if (map[x][y] == 0) 
    			    {
    				    printf(" ");
    			    }
    	        }
    	        printf("\n");
    	    }
    	    main();
    	   case 9: // end program
    	    exit(0);
	}
}


