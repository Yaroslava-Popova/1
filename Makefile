
myprog: main.o hello.o
	g++ main.o hello.o -o myprog
main.o: headers.h main.cpp
	g++ -c main.cpp
hello.o: hello.cpp
	g++ -c hello.cpp
clean:
	rm -rf *.o myprog
