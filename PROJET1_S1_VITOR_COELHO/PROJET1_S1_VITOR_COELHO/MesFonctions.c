/*
Fonctions : -infoVariables


R�alis� par : Vitor Coelho
*/

//-- fonction --//
#include "MesFonction.h"
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
	if ((valUtilisateur - (short)valEntier) == 0.0)
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

		if (sizeof(valUtilisateur) == 1) {
			printf("La valeur est sur 8 bits.\n");
		}
		else if (sizeof(valUtilisateur) == 2) {
			printf("La valeur est sur 16 bits.\n");
		}
		else {
			printf("La taille de la valeur n'est ni sur 8 bits ni sur 16 bits.\n");
		}
	}
}