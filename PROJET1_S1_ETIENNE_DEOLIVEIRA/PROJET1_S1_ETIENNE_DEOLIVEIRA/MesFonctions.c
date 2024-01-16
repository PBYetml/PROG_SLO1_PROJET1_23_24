// Mes Fonctions.c
//Etienne De Oliveira

#include "MesFonctions.h"	//-> librairie perso
#include <stdio.h>          // entr�e - sortie


void infoVariables(double valeurUtilisateur)
{
	//-- d�claration de variable --//
	long valEntier;
	float reste;

	//-- d�but prog --//
	valEntier = valeurUtilisateur; //caste de la partie r�el => garder que la partie enti�re
	//-- test positif ou n�gatif --//
	if (valeurUtilisateur < 0.0)
	{
		printf("la valeur est Negative \n");
	}
	else
	{
		printf("la valeur est Positive \n");
	}
	//-- test entier --//
	if ((valeurUtilisateur - valEntier) == 0.0)
	{
		printf("la valeur est Entiere \n");
		//-- test paire ou impaire --//
		if ((valeurUtilisateur / 2.0) == 0.0)
		{
			printf("la valeur est Paire \n");
		}
		else
		{
			printf("la valeur est Impaire \n");
		}
		//-- type � utiliser --//
		if ((valeurUtilisateur >= -128) || valeurUtilisateur <= 255)
		{
			printf("Type a utiliser : char ou int8_t \n");
		}
		else
		{
			printf("Type a utiliser : short ou int16_t \n");
		}
	}
	else
	{
		printf("la valeur est Reelle \n");
		printf("cette valeur ne peut ni etre paire ou impaire \n");
		printf("Type a utiliser : float \n");
	}

}
