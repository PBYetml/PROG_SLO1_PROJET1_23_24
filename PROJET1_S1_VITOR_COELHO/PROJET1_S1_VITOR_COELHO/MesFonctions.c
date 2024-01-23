/*
Fonctions : -infoVariables


R�alis� par : Vitor Coelho
*/

//-- fonction --//
#include "MesFonctions.h"
#include <stdio.h>



void InfoVariables(float valUtilisateur)
{

	// D�claration des variables
	short valEntier = 0;
	float reste = 0;
	
	// Caste du param�tre d'entr�e sous type entier (short).
	valEntier = (short) valUtilisateur;

	// Test valeur positive ou n�gative
	if (valUtilisateur > 0.0)
	{
		printf("la valeur est Positive \n");
	}
	else
	{
		printf("la valeur est N�gative \n");
	}

	//Test valeur r�elle ou enti�re
	if ((valUtilisateur - valEntier) == 0.0)
	{
		printf("la valeur est R�elle \n");
		printf("cette valeur ne peut ni etre paire ou impaire \n");
		printf("Type � utiliser : float \n");
	}
	else
	{
		printf("la valeur est Entiere \n");

		if (((short)valUtilisateur % 2) == 0.0)
		{
			printf("la valeur est paire \n");
		}
		else
		{
			printf("la valeur est impaire \n");
		}
		if ((valUtilisateur >= -128) || (valUtilisateur <= 255))
		{
			printf("Type � utiliser : short ou int16_t \n");
		}
		else
		{
			printf("Type � utiliser : char ou int8_t \n");
		}
	}
}