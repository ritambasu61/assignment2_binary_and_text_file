#include <stdio.h>
#include <stdlib.h>
//pointer_introduced_as_p
//writing_result_to_a_binary_file
int main()
{
  FILE *p;char ch[]="hey ritam The mean is: 3383.5\n and The variance is: 9055261";
        p=fopen("bin_file2_ritam.bin","wb");
	if (p==NULL)
	{
		printf("Error");
	}
	else
	  {printf("file is open\n");
	      }
	fwrite(ch,sizeof(ch),1,p);
	fclose(p);
	return 0;
}
