/*
11.1.2024
ACL
*/
#include "MesFonctions.h"
#include <stdio.h>

void InfoVariables (float valUser)
{
	short valEntier = 0;
	float reste = 0.0;

	valEntier = (short) valUser;

	if (valUser < 0.0)
	{
		printf("La valeur est Negative\n");
	}
	else
	{
		printf("La valeur est Positive!\n");
	}
	if ((valUser - (short)valEntier) == 0.0)
	{
		printf("La valeur est Entiere\n");
		if ((short)valUser % DEU == 0)
		{
			printf("La valeur est Paire\n");
		}
		else
		{
			printf("La valeur est Impaire\n");
		}

		//marche pour positif 
		//if  (valEntier >>8) && .... 

		/*
		if ((valEntier > ValA) && (valEntier < ValB))
		{
			printf("Type a utiliser : char ou int8_t\n");
		}
		else if((valEntier > ValC) && (valEntier < ValD))
		{
			printf("Type a utiliser : short ou int16_t\n");
			
		}
		else
		{
			printf("Type a utiliser : long ou int\n");
		}
		*/

		if (sizeof(valEntier) > sizeof(char))
		{
			printf("Type a utiliser : short ou int16_t\n");

		}
		else
		{
			printf("Type a utiliser : char ou int8_t\n");
		}
	}
	else
	{
		printf("La valeur est Reelle\n");
		printf("Cette valeur ne peut ni paire ou impaire\n");
		printf("Type a utiliser float\n");
	}

}