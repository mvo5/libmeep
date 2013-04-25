#include<stdio.h>
#include<errno.h>

#include "meep.h"

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
