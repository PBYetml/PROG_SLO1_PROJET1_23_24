// Date		: 11.01.2024
// Auteur	: Stopa Karol

//--- librairie standart ---//
#include <stdio.h> 

// Fonction
int infoVariable(float valUser)
{
	// D�claration des variables
	int valEntier;
	float reste;

	// Caste de la partie r�el => garder que la partie enti�re
	valEntier = valUser;

	// V�rifie si la valeur est n�gative ou positive
	if (valUser < 0.0)
	{
		// Affichage du message en cas de valeur n�gative
		printf("la valeur est N�gative\n");
	}
	else
	{
		// Affichage du message en cas de valeur positive
		printf("la valeur est Positive\n");
	}

	// V�rifie si la valeur est entiere ou r�elle
	if ((valUser - valEntier) == 0.0)
	{
		// Affichage du message en cas de valeur entiere
		printf("la valeur est Entiere\n");

		// V�rifie si la valeur est paire ou impaire
		if(((int)valUser % (int)2.0) == 0.0)
		{
			// Affichage du message en cas de valeur paire
			printf("la valeur est paire\n");
		}
		else
		{
			// Affichage du message en cas de valeur impaire
			printf("la valeur est impaire\n");
		}

		// V�rifie quelle type utiliser
		if ((valUser >= -128) && (valUser <= 255))	// J'ai modifier le OU du FlowChart par un ET
		{
			// Affichage du type � utiliser (char ou int8_t)
			printf("Type � utiliser : char ou int8_t\n");
		}
		else
		{
			// Affichage du type � utiliser (short ou int16_t)
			printf("Type � utiliser : short ou int16_t\n");
		}
	}
	else
	{
		// Affichage du message en cas de valeur r�elle
		printf("la valeur est R�elle\n");
		printf("cette valeur ne peut ni paire ou impaire\n");

		// Affichage du type � utiliser (float)
		printf("Type � utiliser : float\n");
	}
	return(0);
}