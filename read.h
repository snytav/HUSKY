#ifndef READ_H
#define READ_H

#include <vector>
#include <string>
#include "particle.h"
 using namespace std;

double *read_array_from_txt_file(const char *fname);

vector<Particle> & getQuasi1D_ParticleArrayFromFiles(
                string x_filename,
                string v_filename);



#endif
