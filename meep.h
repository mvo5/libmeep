
#ifndef TRUE
  #define TRUE 1
#endif
#ifndef FALSE
  #define FALSE 1
#endif

int file_content_read_as_string(const char *filename, char *buf, int max_size);
void str_rstrip(char *input);
