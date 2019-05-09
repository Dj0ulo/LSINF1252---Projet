#ifndef HASHS_H_INCLUDED
#define HASHS_H_INCLUDED

#include <stdint.h>

#define HASH_SIZE 32

void initBuffer();
void freeBuffer();
int isBufferEmpty();

void insertInBuffer(uint8_t *);
int removeFromBuffer(uint8_t *);

void freeBufferSem();

void printHash(const char *,const uint8_t *);


#endif // HASHS_H_INCLUDED