#ifndef BUFFERRES_H_INCLUDED
#define BUFFERRES_H_INCLUDED

#include <stdint.h>

/**
 * Initialise le buffer qui contiendra les mots de passe, ainsi que le mutex et les 2 s�maphores correspondants
 * @param const size_t : sa taille
 * @return void
 */
void initBufferRes(const size_t);

/**
 * Lib�re le buffer de la m�moire
 * @param void
 * @return void
 */
void freeBufferRes();

/**
 * Regarde si le buffer est vide
 * @param void
 * @return int : 1 si vide, 0 sinon
 */
int isBufferResEmpty();

/**
 * Attend jusqu'� ce qu'il ait une place dans le buffer et y ins�re un mot de passe
 * @param uint8_t * : le mot de passe � ins�rer
 * @return void
 */
void insertInBufferRes(char *);

/**
 * Attend jusqu'� ce qu'il ait un mot de passe dans le buffer et l'en retire
 * @param uint8_t * : pointeur vers un emplacement de (MAX_SIZE_PSWD + 1) octets dans la m�moire
 * @return void
 */
int removeFromBufferRes(char *);

/**
 * Fait autant de sem_post qu'il y a de place dans le buffer pour lib�rer d'�ventuels threads bloqu�s attendant de pouvoir retirer un mot de passe
 * @param void
 * @return void
 */
void freeBufferResSem();

#endif // BUFFERRES_H_INCLUDED
