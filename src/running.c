

#include <stdio.h>
#include <stdlib.h>
#define MAX_NUM 300
int aLoop[MAX_NUM + 10];
main()
{
	int n, m, i;
	while(1) {
		scanf( "%d%d", & n, & m);
		if ( n == 0 )
			break;
		for( i = 0; i < n; i ++ )
			aLoop[i] = i+1;
		int nPtr = 0;
		for( i = 0; i < n; i ++ ) { //Every time a monkey is driven out of the circle,...The last one was driven out is the Monkey King.
			int nCounted = 0;
			while( nCounted < m ) { //Count m monkeys
				while( aLoop[nPtr] == 0)//Skip the monkeys that have already circled
					nPtr = ( nPtr + 1 ) % n; //To the next position
				nCounted ++;//Find a monkey
				nPtr = ( nPtr + 1 ) % n;//To the next position
			}
			nPtr --;//To roll back a position
			if( nPtr < 0 )
				nPtr = n - 1;
			if( i == n-1 ) //The last monkey out of the circle
				printf("%d\n", aLoop[nPtr]);
			aLoop[nPtr] = 0;//Monkey out circle

		}
	}
}
