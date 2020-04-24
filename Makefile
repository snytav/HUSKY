husky: read.o move.o
		g++ read.o move.o

read.o:
		g++ -c read.cxx	

move.o:
		g++ -c move.cxx	

clean:
		rm *.o husky

