/*
Fonctions : -infoVariables


Réalisé par : Vitor Coelho
*/

//-- fonction --//
#include "MesFonction.h"
#include <stdio.h>



void InfoVariables(float valUtilisateur)
{

	// Déclaration des variables
	short valEntier = 0;
	float reste = 0;
	
	// Caste du paramétre d'entrée sous type entier (short).
	valEntier = (short) valUtilisateur;

	// Test valeur positive ou négative
	if (valUtilisateur > 0.0)
	{
		printf("la valeur est Positive \n");
	}
	else
	{
		printf("la valeur est Négative \n");
	}

	//Test valeur réelle ou entière
	if ((valUtilisateur - (short)valEntier) == 0.0)
	{
		printf("la valeur est Réelle \n");
		printf("cette valeur ne peut ni etre paire ou impaire \n");
		printf("Type à utiliser : float \n");
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