#include "read.h"

using namespace std;

#include <vector>

int main(int argc,char *argv[])
{

	vector<Particle> vp;
       
	vp = getQuasi1D_ParticleArrayFromFiles("r.txt","v.txt");

	return 0;
}	

