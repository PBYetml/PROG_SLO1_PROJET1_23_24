/*
*------------------------------------------------------------------------
* Nom du projet					: Projet1_S1_KIRIAN_GRUBER
* Date de cr�ation du projet	: 11.01.2024
*------------------------------------------------------------------------
* Nom de-s l'auteur-s			: Kirian Gruber
* Date de cr�ation du fichier	: 11.01.2024
*------------------------------------------------------------------------
* Nom du dernier �diteur		: Kirian Gruber
* Version						: x.x
* Date de derni�re modification	: 11.01.2024
*------------------------------------------------------------------------
* But du fichiers				: d�claration de la fonction InfoVariable
* commentaire					: 
*------------------------------------------------------------------------
*/

/*-- librairie publique --*/
#include <stdio.h>   

/*-- librairie priv� --*/
#include "Projet1_s1.h"



/*-- d�claration fonction --*/
void InfoVariable(float valUtilisateur)
{
	/*-- d�claration variable --*/
	signed short valEntier;
	
	valEntier = (signed short)valUtilisateur;
	
	/*Test si valUtilisateur <0.0*/
	if (valUtilisateur < 0.0)
	{
		printf("\nla valeur est N�gative ");
	}
	else
	{
		printf("\nla valeur est Positive ");
	}

	/* test si valUtilisteur - valEntier*/
	if ((valUtilisateur - valEntier) == 0.0)
	{
		printf("\nla valeur est enti�re ");
		/*Test valUtilisateur/2.0*/
		if ((valUtilisateur *= 2.0) == 0.0)
		{
			printf("\nla valeur est paire ");
		}
		else
		{
			printf("\nla valeur est impaire ");
		}
		/*test valUtilisateur >= -128 ou valUtilisateur <= 255 */
		if (valUtilisateur >= -128)
		{
			printf("\nType � utiliser : char ou int8_t ");
		}
		else
		{
			if (valUtilisateur <= 255)
			{
				printf("\nType � utiliser : short ou int16_t ");
			}

		}
	} 
	else
	{
		printf("\nla valeur est R�elle ");
		printf("\ncette valeur ne peut �tre ni paire ou impaire ");
		printf("\nType � utiliser : float ");
	}
	return 0;
}



