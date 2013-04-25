#include<assert.h>
#include<string.h>

#include "meep.h"

int main(int argc, char **argv)
{
   char buf[128];
   assert(file_content_read_as_string("not-there", buf, sizeof(buf)) == FALSE);

   assert(file_content_read_as_string("test_meep.data", buf, sizeof(buf)) == TRUE);
   assert(strcmp(buf, "12345") == 0);

   return 0;
}
