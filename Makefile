main: A.o a.o
	g++ -o main A.o a.o

A.o: A.cpp a.h
	g++ -c A.cpp

a.o: a.cpp a.h
	g++ -c a.cpp

clean:
	rm *.o
