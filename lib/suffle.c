#include "test.h"
#include "global.h"

void suffle()
{
	int Array[20] = { 1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10 };
	int i, n;
	int nTmp;
	int nMax = 20;

	srand((unsigned int)time(0));

	for (i = nMax - 1; i >= 0; i--)
	{
		n = rand() % nMax;
		nTmp = Array[i];
		Array[i] = Array[n];
		Array[n] = nTmp;
	}
	usercard1 = Array[0];
	usercard2 = Array[2];
	comcard1 = Array[1];
	comcard2 = Array[3];
	


}
