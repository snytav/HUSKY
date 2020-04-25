#include<stdio.h>
#include<gsl/gsl_blas.h>



void move(double *r,double *v,int n)
{
	gsl_vector *gsl_r = gsl_vector_alloc(n);
	gsl_vector *gsl_v = gsl_vector_alloc(n);

	//gsl_blas_daxpy(double alpha, const gsl_vector * x, gsl_vector * y);
}	
