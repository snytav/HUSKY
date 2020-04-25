#include <stdio.h>
#include <stdlib.h>
#include "particle.h"

using namespace std;

#include<vector>
#include<string>

//return array size
int read_array_from_txt_file(const char *fname,double **a)
{
	char  str[100];
    int   i;
    FILE *f;

    if((f = fopen(fname, "rt")) == NULL) return -1;

	i = 0;
	while(fgets(str,100,f) != NULL)
	{
		i++;
	}
	fclose(f);


	*a = ( double *)malloc(i*sizeof(double));

	if((f = fopen(fname, "rt")) == NULL) return -1;

	i = 0;
	while(fgets(str,100,f) != NULL)
	{
		(*a)[i] = atof(str);
		i++;
	}

	return i;
}


//reading particle arrays from Sauro Succi's example
//at the moment we are just reading electrons.
//Ions are emulated by adding '-1' to density
//second electron ensemble (beam) is temoparily not used at all
//so the number of particles is set to 0
vector<Particle> & getQuasi1D_ParticleArrayFromFiles(
		string x_filename,
		string v_filename)
{
    char str[100];
    int i;
	double *r,*v;

	int total = read_array_from_txt_file(x_filename.c_str(),&r);
	read_array_from_txt_file(v_filename.c_str(),&v);
	//note - we're reading velocities, not impulses

	vector<Particle> *vecp = new vector<Particle>;

	for(int j = 0;j < total;j++)
    {
   	    Particle *p = new Particle(r[j],0.0,0.0,v[j],0.0,0.0);

		vecp->push_back(*p);
    }

    return (*vecp);
}

