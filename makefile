default: main

main: main.o
	g++ main.o -o main

main.o: main.cpp
	g++ -c main.cpp -o main.o

run:
	./main

clean:
	rm *.o;clear
