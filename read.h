#ifndef READ_H
#define READ_H

#include <vector>
#include <string>
#include "particle.h"
 using namespace std;

vector<Particle> & getQuasi1D_ParticleArrayFromFiles(
                string x_filename,
                string v_filename);



#endif
