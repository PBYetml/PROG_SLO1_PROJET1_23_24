 
/*================== Function ====================
 * @brief description de la fonction
 *
 * Cette fonction va prendre le param�tre d'entr�e et indiquer s'il est:
 *		- Positif ou N�gatif
 *		- R�el ou Entier
 *		- Pair / Impaire / Ni pair ni impaire
 *		- Le type � utiliser (float, int8_t,etc)
 *
 * @param param�tte1 nombre � analyser.
 * @return retoune 0 si tous c'est bien termin�.
 */
int infoVariable(float Nombre)
{
	//-- d�claration de variables locales --//
	int valEntier = Nombre; //garder uniquement la partie enti�re du nombre d'entr�e de la fonctions 
	int reste = 0; //Pas utilis�

	//-- Indique � l'utilisateur si le nombre entr� est positif ou n�gatif --//
	if (Nombre < 0.0)
	{
		printf("La valeur est Negative\n");
	}
	if (Nombre > 0.0)
	{
		printf("La valeur est Positive\n");
	}
	if (Nombre - valEntier == 0.0)
	{
		printf("La valeur est Entiere\n");
		if (Nombre / 2 == 0.0)
		{
			printf("La valeur est Paire\n");
		}
		if (Nombre / 2 != 0.0) // erreur
		{
			printf("La valeur est Impaire\n");
		}
		if (Nombre >= -128 || Nombre <= 255)
		{
			printf("Type a utiliser : char ou int8_t\n");
		}
		else
		{
			printf("Type a utiliser : short ou int16_t\n");
		}
	}
	if (Nombre - valEntier != 0.0)
	{
		printf("La valeur est Reelle\n");
		printf("Cette valeur ne peut etre ni paire ou impaire\n");
		printf("Type a utiliser : float\n");
	}
	return 0;

}