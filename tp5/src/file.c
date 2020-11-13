#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "types.h"
#include "functions.h" // extern functions declarations

// ------------------------------------------------------------------------
// inner functions declarations
// ------------------------------------------------------------------------

// TO BE COMPLETED

//------------------------------------------------------------------------
// global functions definitions
//------------------------------------------------------------------------

/**
   Create and initialize file table of capacity maxfiles

   parameters :
   maxfiles : capacity of file table

   returns : pointer to table or NULL in case of error
 */
listfile_entry *
create_filelist(int maxfiles)
{
  listfile_entry * filelist = (listfile_entry*)malloc(sizeof(listfile_entry)*maxfiles);

  for(int i=0; i<maxfiles ; i++){
    filelist[i].filename[0] = "\0"; // \0 = chaine vide
    filelist[i].loaded = 0;
  }

  return filelist;
}

/**
   add words from file to table
   - checks if the file has already been loaded
   - updates the file table (if file not already loaded)
   - reads every word in the file (idem)
   - updates the hash table (idem)

   parameters :
   filename   : name of file :)
   filelist   : pointer to table of files
   htable_ptr : pointer to hash table

   returns :
    1 if file already present in table
    2 if no space left in filelist
   -1 if file doesn't exist or can't be read
   -2 if allocation error
    0 if everything ok
*/
int
add_file(char filename[],
	 listfile_entry * filelist,
	 hash_table * htable_ptr)
{

  return 0; // all fine
}

int
is_loaded(listfile_entry* filelist, char filename[] ){
  for(int i = 0; i < MAX_FILES; i++){
    if(filelist[i].filename == filename){
      return filelist[i].loaded;
    }
  }
  return 0;
}

/**
   remove file from file table

   parameters :
   filename   : name of file to remove
   filelist   : pointer to table of files
   htable_ptr : pointer to hash table

   returns :
   -1 if file not in table
    0 if file removed
*/
int
remove_file(char filename[],
	    listfile_entry * filelist,
	    hash_table * htable_ptr)
{

  // TO BE COMPLETED

  return 0;
}

/*
  print file table (only loaded files)

  parameters :
   filelist : pointer to table of files
*/
void
print_list(listfile_entry * filelist)
{

  // TO BE COMPLETED

}

/**
   free file table

parameters :
   filelist   : pointer to table of files
*/
void
free_filelist(listfile_entry * filelist)
{
  free(filelist);
}

// ************************************************************************
// inner functions
// ************************************************************************

// TO BE COMPLETED
