person: main.o stomach.o person.o heart.o
	g++ -std=c++11 -o person main.cpp stomach.cpp person.cpp heart.cpp

main.o: main.cpp stomach.h person.h
	g++ -c -std=c++11 main.cpp

stomach.o: stomach.cpp stomach.h
	g++ -c -std=c++11 stomach.cpp

person.o: person.cpp person.h
	g++ -c -std=c++11 person.cpp

heart.o: heart.cpp heart.h
	g++ -c -std=c++11 heart.cpp

clean:
	rm *.o person
