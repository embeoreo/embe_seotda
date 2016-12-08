#include "test.h"
#include "global.h"

int UserCardCheck()
{
	

	if (usercard1 == usercard2) //if cards are equal, result is ddang
	{
		return 100 + usercard1 + usercard2;
	}
	else // if cards are not eqaul,result is ggt
	{
		return (usercard1 + usercard2) % 10;
	}
}
