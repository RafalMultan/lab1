#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	int n;
	n=atoi(argv[1]);
	srand(atoi(argv[2]));
	drawCharSquare(charSquare(n), n);
	printf("%d \n",atoi(argv[2]));	
}

char **charSquare(int n)
{
	char **square;
	square=new char *[n];
	for(int i=0;i<n;i++)
	{
		square[i]=new char[n];
		for(int j=0;j<n;j++)
			square[i][j]=97+rand()%(122-97+1);
	}
	return square;
}

void drawCharSquare(char **square, int n)
{
	for(int i=0;i<n;i++)
		
		{
			for(int j=0;j<n;j++)
			printf("%c ",square[i][j]);
		printf("\n");
		}

}