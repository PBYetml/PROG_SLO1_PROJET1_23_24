//EN-TETE
/************************************************************
 *                                                           *
 *                      InfoVariables                        *
 *                                                           *
 * Fichier : MesFonctions.c                                  *
 * Projet : PROJETS1_S1_MATTEO_STEFANELLI                    *
 * Description : Ce programme utilise une fonction pour      *
 *               additionner definir le type d'une variable. *
 * Auteur initial : Matteo Stefanelli                        *
 * Date de cr�ation : 11.01.2024                             *
 * Auteurs des modifications :                               *
 *   - Nom de l'auteur 1                                     *
 *     Date de modification : DD/MM/YYYY                     *
 *   - Nom de l'auteur 2                                     *
 *     Date de modification : DD/MM/YYYY                     *
 *   ...                                                     *
 ************************************************************/

// INCLUSIONS
// -----------
// Inclure les biblioth�ques n�cessaires ici.
#include <stdio.h>
#include "MesFonctions.h"


// PROTOTYPES DES FONCTIONS
// ------------------------
// D�clarer les prototypes des fonctions utilis�es dans le programme.




// FONCTION 
// -------------------
void InfoVariables(float valUser)
 {
       // D�clarer les variables locales n�cessaires.
     int valEntier;

     valEntier = valUser;            //Warning � ce niveau, passage d'une valeur de type float � entier
                                     //perte de donn�es possible
   
   
   //CONDITION POS OU NEG
     if (valUser > 0.0)
     {
         printf("La valeur saisie est positive ! : \n");
     }
     else
     {
         printf("La valeur saisie est n�gative ! : \n");
     }


    //CONDITION REEL OU ENTIER
     if ((valUser - valEntier) == 0)
     {
         printf("La valeur saisie est r�elle ! : \n");
         printf("La valeur saisie n'est ni pair, ni impair ! : \n");
         printf("Le type � utiliser est : float ! : \n");
     }
     else
     {
         printf("La valeur saisie est enti�re ! : \n");

         // CONDITION PAIR OU IMPAIR
         if ((valUser / 2.0) == 0.0)
         {
             printf("La valeur saisie est impair ! : \n");
         }
         else
         {
             printf("La valeur saisie est pair ! : \n");
         }

        // CONDITION SHORT OU CHAR
         if ((valUser >= -128) || (valUser < 255))
         {
             printf("Le type � utiliser est : char  ! : \n");
         }
         else
         {
             printf("Le type � utiliser est : short  ! : \n");
         }

     }

    // FIN DE LA FONCTION
    // ----------------
}

