husky: read.o main.o move.o
		g++ main.o move.o read.o -o husky -lgsl -lgslcblas

read.o:
		g++ -c read.cxx	

main.o:
		g++ -c main.cxx

move.o:
		g++ -c move.cxx

clean:
		rm *.o husky

