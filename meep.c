#include<stdio.h>
#include<errno.h>
#include<string.h>

#include "meep.h"

/* Read up to "max_size" data from the given filename into "buf".
   Useful to read entire short files.

   Returns TRUE on success and FALSE otherwise
 */
int file_content_read_as_string(const char *filename, char *buf, int max_size)
{
   FILE *f = fopen(filename, "r");
   if(f == NULL)
      return FALSE;

   size_t len = fread(buf, sizeof(char), max_size-1, f);
   fclose(f);

   if(len < 0)
      return FALSE;

   buf[len] = '\0';
   return TRUE;
}

/* Modify input string in place to remove trailing whitespace
 */
void str_rstrip(char *input)
{
   int i = strlen(input);
   while(i >= 0 && (input[i] == '\0' || input[i] == '\n' || 
                    input[i] == ' '  ||  input[i] == '\t')) {
      i--;
   }
   input[i+1] = 0;
}
