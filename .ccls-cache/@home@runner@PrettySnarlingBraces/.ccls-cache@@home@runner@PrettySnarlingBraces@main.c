#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// this is code 

int main(int argc, const char* argv[]) {
  char buf[1024];
  char *successful_read;
  printf("Enter string\n");
  successful_read = fgets(buf,sizeof(buf),stdin);
  if (successful_read && strlen(buf) > 0) {
    buf[strlen(buf)-1] = '\0';
  }
  printf("Entered '%s'\n",buf);

  int hh;
  int mm;
  if (2 == sscanf(buf,"%d %d",&hh,&mm))
  {
    printf("got %d %d\n",hh,mm);
  }
  return EXIT_SUCCESS;
}
