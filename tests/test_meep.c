#include<assert.h>
#include<string.h>
#include<stdio.h>

#include "meep.h"

void test_file_content_read_as_string()
{
   char buf[128];
   assert(file_content_read_as_string("not-there", buf, sizeof(buf)) == FALSE);

   assert(file_content_read_as_string("test_meep.data", buf, sizeof(buf)) == TRUE);
   assert(strcmp(buf, "12345") == 0);
}

void test_str_rstrip()
{
   char buf1[] = "meep\n \n";
   str_rstrip(buf1);
   assert(strlen(buf1) == 4);

   char buf2[] = "mep\n";
   str_rstrip(buf2);
   assert(strlen(buf2) == 3);

   char buf3[] = "";
   str_rstrip(buf3);
   assert(strlen(buf3) == 0);

   char buf4[] = "\0\1";
   str_rstrip(buf4);
   assert(buf4[0] == '\0' && 
          buf4[1] == '\1');

   char buf5[] = "  \n \t";
   str_rstrip(buf5);
   assert(strlen(buf5) == 0);
}

int main(int argc, char **argv)
{
   test_file_content_read_as_string();
   test_str_rstrip();

   printf("\n\nAll test are OK\n\n");
   return 0;
}
