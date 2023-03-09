/* https://github.com/sohitfirs/2.6.git */

#include <stdio.h>
#include <cstdlib>

main()
{
	int d,m,y;
	printf("day? ");
	scanf("%i", &d);
		printf("month? ");
	scanf("%i", &m);
		printf("year? ");
	scanf("%i", &y);
	
	if (y%4==0)
	{
		printf("leap year\n");
	}
	else
	{
		printf("non-leap year\n");
	}

	switch(y% 12)
	{
		case 0:
			{
				printf("Monkey\n");
			}
			break;
		case 1:
			{
				printf("Rooster\n");
			}
			break;
		case 2:
			{
				printf("Dog\n");
			}
			break;
		case 3:
			{
				printf("Pig\n");
			}
			break;
		case 4:
			{
				printf("Rat\n");
			}
			break;
		case 5:
			{
				printf("Bull\n");
			}
			break;
		case 6:
			{
				printf("Tiger\n");
			}
			break;
		case 7:
			{
				printf("Rabbit\n");
			}
			break;
		case 8:
			{
				printf("Dragon\n");
			}
			break;
		case 9:
			{
				printf("Snake\n");
			}
			break;
		case 10:
			{
				printf("Horse\n");
			}
			break;
		case 11:
			{
				printf("Goat\n");
			}
			break;
	}
	
	if ((d>=21 && m==12) || (d<=20 && m==1))
	{
		printf("Capricorn\n");
	}
	else if ((d>=21 && m==1) || (d<=20 && m==2))
	{
		printf("Aquarius\n");
	}
	else if ((d>=21 && m==2) || (d<=20 && m==3))
	{
		printf("Pisces\n");
	}
	else if ((d>=21 && m==3) || (d<=20 && m==4))
	{
		printf("Aries\n");
	}
	else if ((d>=21 && m==4) || (d<=20 && m==5))
	{
		printf("Taurus\n");
	}
	else if ((d>=21 && m==5) || (d<=20 && m==6))
	{
		printf("Gemini\n");
	}
	else if ((d>=21 && m==6) || (d<=20 && m==7))
	{
		printf("Cancer\n");
	}
	else if ((d>=21 && m==7) || (d<=20 && m==8))
	{
		printf("Leo\n");
	}
	else if ((d>=21 && m==8) || (d<=20 && m==9))
	{
		printf("Virgo\n");
	}
	else if ((d>=21 && m==9) || (d<=20 && m==10))
	{
		printf("Libra\n");
	}
	else if ((d>=21 && m==10) || (d<=20 && m==11))
	{
		printf("Scorpio\n");
	}
	else if ((d>=21 && m==11) || (d<=20 && m==12))
	{
		printf("Sagittarius\n");
	}
		
	system("pause");
}
