#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    char *value;
    struct Node *next;
};
typedef struct Node node_t;

typedef struct list{
  node_t *first;
  size_t size;
  unsigned int score;
} list_t;

/**
 * Initialise la linked list
 * @param void
 * @return void
 */
void initList();

/**
 * Supprime tous les �l�ments de la linked list
 * @param void
 * @return void
 */
void eraseList();

/**
 * Lib�re la linked list de la m�moire
 * @param void
 * @return void
 */
void freeList();

/**
 * Calcule le nombre de voyelles ou de consonnes dans une cha�ne de caract�res
 * @param const char * : la cha�ne de caract�res
 * @param const int : crit�re de s�lection VOWEL ou CONSONANT
 * @return unsigned int : nombre de voyelles ou de consonnes dans la cha�ne de caract�res
 */
unsigned int getScore(const char *, const int);

/**
 * Ajoute un mot de passe � la linked list si il a un score aussi bon ou meilleur que les autres
 * @param const char * : le mot de passe
 * @param const int : crit�re de s�lection VOWEL ou CONSONANT
 * @return int : 0 si c'est le premier de la liste, 1 si il est ajout�, 2 si il est meilleur et donc qu'on a supprimer tous les �l�ments de la liste au pr�alable,
 * et  -1 si il est moins bon
 */
int addIfGood(const char *, const int);

/**
 * Recompte le nombre d'�l�ments dans la linked list
 * @param void
 * @return size_t : le nombre d'�l�ments dans la linked list
 */
size_t calculateSizeList();

/**
 * Retourne sans recompter le nombre d'�l�ments dans la linked list
 * @param void
 * @return size_t : le nombre d'�l�ments dans la linked list
 */
size_t sizeList();

/**
 * Imprime les mots de passe de la linked list
 * @param void
 * @return void
 */
void printList();

/**
 * Ecrit la liste dans un fichier ou dans la sortie standard si aucun nom de fichier n'est envoy�
 * @param const char * : nom du fichier
 * @return int : 0 si tout c'est bien pass�, -1 si il y a eu un probl�me � l'ouverture du fichier, -2 si la linked list est un pointeur null,
 * -3 si il y a eu un probl�me dans l'�criture, -4 si il y a eu un probl�me lors de la fermeture
 */
int writeList(const char *);


#endif // LINKEDLIST_H_INCLUDED
