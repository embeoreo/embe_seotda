#include "test.h"
#include "global.h"

int main()
{

	usermoney = 100000;//user money
	commoney = 100000;//com money	
	call_betting_money=1000;//call betting money

	profile();
	suffle();
	printf("%d %d %d %d\n", usercard1, usercard2, comcard1, comcard2);

	checkCardFlagUser = UserCardCheck();
	checkCardFlagCom = ComCardCheck();
	

	


	startRace();
	return;
}


