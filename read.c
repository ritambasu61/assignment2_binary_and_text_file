#include <stdio.h>
#include <stdlib.h>
//pointer-is_introduced_as_p
//writing_the_result_to_a_text_file
int main()
{
	FILE *p;
	p=fopen("file_ritam.txt","w");
	if (p==NULL)
	{
		printf("Error");
	}
	else
	  {
	    printf("file is open\n");
	      }
	fprintf(p,"%s\n%s","hey ritam The mean is: 3383.5","The variance is: 9055261.0");
	fclose(p);
	return 0;
}
