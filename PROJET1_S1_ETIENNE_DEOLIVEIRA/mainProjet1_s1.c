//-----------------------------------------------------------------------------------//
// Nom du projet 		: Projet 1 - Info Variable 
// Nom du fichier 		: mainProjet1_s1.c
// Date de cr�ation 	: 21.10.2022
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques			: voir donnee de l'�preuve            
//----------------------------------------------------------------------------------//
//-- directive pr�processeur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

//--- librairie standart ---//
#include <stdio.h>                  // entr�e - sortie

//--- librairie perso ---//
//#include "MesFonctions.h"

//-- definition --// 
#define LIMITE_MAX	10000.0
#define LIMITE_MIN	-10000.0


//-- d�claration de constantes --// 
const char* ptNOM_CANDIDAT = "Etienne"; 
const char VERSION_PROJET = 1; 
const unsigned short ANNEE_TEST = 2024; 


//-- programme principal --// 
void main()
{
	//-- d�claration de variables locales --//
	float valUtilisateur; 

	//-- message utilisateur --// 
	printf("-- TEST n%02d - annee : %d - Nom Candidat : %s --\n", VERSION_PROJET, ANNEE_TEST, ptNOM_CANDIDAT); 
	
	//-- demander valeur � l'utilisateur --// 
	//-- si celle-ci n'est pas correct -> nouvelle demande --// 
	do
	{
		//-- messgae utilisateur --// 
		printf("\nEntrer une valeur entre -10000 et 10000 : "); 

		//-- r�cuperation valeur utilisateur --// 
		scanf("%f", &valUtilisateur); 

		//-- nettoyer le bufferclavier --// 
		while ((getchar() != '\n') && (getchar() != EOF));

	} while ((valUtilisateur < LIMITE_MIN) || (valUtilisateur > LIMITE_MAX)); 

	//-- appel de fonction  : infoVariable 
	infoVariables();
	
}