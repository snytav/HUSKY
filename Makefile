husky: read.o main.o
		g++ main.o read.o -o husky

read.o:
		g++ -c read.cxx	

main.o:
		g++ -c main.cxx

clean:
		rm *.o husky

