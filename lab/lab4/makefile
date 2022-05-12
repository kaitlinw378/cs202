bookstore: driver.o book.o
	g++ -std=c++11 -o bookstore driver.o book.o

driver.o: driver.cpp book.h
	g++ -std=c++11 -c driver.cpp

book.o: book.cpp book.h
	g++ -std=c++11 -c book.cpp

clean :
	rm bookstore *.o
