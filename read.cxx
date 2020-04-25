#include <stdio.h>
#include <stdlib.h>

//return array size
double *read_array_from_txt_file(const char *fname)
{
	char  str[100];
    int   i;
    FILE *f;
    double *a;

    if((f = fopen(fname, "rt")) == NULL) return NULL;

	i = 0;
	while(fgets(str,100,f) != NULL)
	{
		i++;
	}
	fclose(f);


	a = ( double *)malloc(i*sizeof(double));

	if((f = fopen(fname, "rt")) == NULL) return NULL;

	i = 0;
	while(fgets(str,100,f) != NULL)
	{
		a[i] = atof(str);
		i++;
	}

	return a;
}

