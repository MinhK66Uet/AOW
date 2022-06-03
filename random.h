#pragma once
#include <cstdlib>
#include <ctime>

int random( int Min, int Max )
{
	srand( time(NULL) );
	int res = rand() % ( Max - Min + 1 ) + Min ;
	return res;
}

