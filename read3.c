#include <stdio.h>
#include <stdlib.h>
//read_the_binary_file
int main()
{
  char c;
  FILE *p;
  p=fopen("bin_file2_ritam.bin","rb");
  if (p==NULL)
    printf("File is not open");
  while (c!=EOF)
       {
  c=fgetc(p);putchar(c);
    }
  fclose(p);
  return 0;
}
    
