cat: main.cpp cat.o
	g++ -std=c++11 main.cpp cat.o -o cat

cat.o: cat.cpp cat.h
	g++ -c -std=c++11 cat.cpp

clean:
	rm *.o