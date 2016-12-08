#include "test.h"
#include "global.h"

int ComRace()
{
	int ccc = ComCardCheck();
	srand((unsigned int)time(NULL));
	int comrand = rand() % 10;
	if (commoney > 0) //com has money
	{
		if (ccc<5)
		{
			if (comrand<5)
			{
				usermoney = usermoney + total_betting_money;
				return 1; //return 1 is lose
			}
			else if (comrand >= 5 && comrand<8)
			{

				printf("now betting money is %dwon\n ", call_betting_money);
				total_betting_money = total_betting_money + call_betting_money;
				commoney = commoney - call_betting_money;
				return 2;
			}
			else if (comrand>8)
			{
				total_betting_money = total_betting_money + call_betting_money + (total_betting_money / 2);
				call_betting_money = total_betting_money / 2;
				commoney = commoney - call_betting_money;
				return 3;
			}
		}
		else if (ccc >= 5 && ccc<100)
		{
			if (comrand<4)
			{
				usermoney = usermoney + total_betting_money;
				return 1; //return 1 is lose
			}
			else if (comrand >= 4 && comrand<7)
			{

				printf("now betting money is %dwon\n ", call_betting_money);
				total_betting_money = total_betting_money + call_betting_money;
				commoney = commoney - call_betting_money;
				return 2;
			}
			else if (comrand>7)
			{
				total_betting_money = total_betting_money + call_betting_money + (total_betting_money / 2);
				call_betting_money = total_betting_money / 2;
				commoney = commoney - call_betting_money;
				return 3;
			}
		}
		else if (ccc>100)
		{
			if (comrand<1)
			{
				usermoney = usermoney + total_betting_money;
				return 1; //return 1 is lose
			}
			else if (comrand >= 1 && comrand<4)
			{

				printf("now betting money is %dwon\n ", call_betting_money);
				total_betting_money = total_betting_money + call_betting_money;
				commoney = commoney - call_betting_money;
				return 2;
			}
			else if (comrand>4)
			{
				total_betting_money = total_betting_money + call_betting_money + (total_betting_money / 2);
				call_betting_money = total_betting_money / 2;
				commoney = commoney - call_betting_money;
				return 3;
			}
		}
	}
	return 0;
}
