#include "test.h"
#include "global.h"


int ComCardCheck()
{
	
	if (comcard1 == comcard2) //if cards are equal, result is ddang
	{
		return 100 + comcard1 + comcard2;
	}
	else // if cards are not eqaul,result is ggt
	{
		return (comcard1 + comcard2) % 10;
	}
}
