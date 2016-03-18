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
	
}

char **charSquare(int n)
{
	//nie wiem jak alokowac tablice dwuwymiarowa w jednym for
	//pomysl uzyty przy wypisywaniu wydaje sie marny
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
	for(int i=0;i<n*n;i++)
		i%n==n-1?printf("%c \n",square[i/n][i%n]):printf("%c ",square[i/n][i%n]);
}