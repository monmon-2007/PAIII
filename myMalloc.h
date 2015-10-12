#ifndef MYMALLOC_H      //#ifndef SORTED_LIST_H ----> I DONT UNDERSTAND THIS BUT
#define MYMALLOC_H     //#define SORTED_LIST_H ----> IT WAS IN THE PREVIOUS PROJECT HEADER FILE
#include <stdio.h>
#include <stdlib.h>

void *mymalloc(unsigned int size, char *file, int line);
void myfree(void *p, char *file, int line);




struct memory
{
	
	 struct memory *pre;
     struct memory *cur;
	
	int isAvail;
	int size;
	//may need to add more, as for now this is what im thinking
	
	
};
typedef struct memory memory;





#endif
