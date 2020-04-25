class Particle
{
public:  
   double x,y,z;
   double vx,vy,vz;

   Particle(){}
   Particle(double x1,double y1,double z1,double vx1,double vy1,double vz1)
   {x = x1; y = y1; z = z1; vx = vx1;vy = vy1; vz = vz1;}
   ~Particle(){}
};
