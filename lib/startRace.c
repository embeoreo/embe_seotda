#include "test.h"
#include "global.h"

void startRace()
{
	while (userState != -999 || comState != -999)
	{
		userState = UserRace();
		if (userState == 1)
		{
			printf("Com Win\n");
			//commoney = commoney + total_betting_money;
			printf("now money\n%s : %d\ncom : %d\n", username, usermoney, commoney);
			initialization();
			break;
		}
		else if (userState == 2)
		{
			printf("%s select call\n*now call betting money : %d\n*total betting money : %d\n", username, call_betting_money, total_betting_money);
		}
		else if (userState == 3)
		{
			printf("%s select half\n*now call betting money : %d\n*total betting money : %d\n", username, call_betting_money, total_betting_money);
		}

		comState = ComRace();
		if (comState == 1)
		{
			printf("%s Win\n", username);
			//usermoney = usermoney + total_betting_money;
			
			printf("now money\n*%s : %d\n*com : %d\n", username, usermoney, commoney);
			initialization();
			break;
		}
		else if (comState == 2)
		{
			printf("com select call\n now call betting money is %d\n total betting money is %d\n",  call_betting_money, total_betting_money);
		}
		else if (comState == 3)
		{
			printf("%s select half\n now call betting money is %d\n total betting money is %d\n", username, call_betting_money, total_betting_money);
		}
	}
}
