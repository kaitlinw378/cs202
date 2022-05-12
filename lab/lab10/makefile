overload: main.cpp Terrier.o dog.o trainable.o
	g++ -std=c++11 main.cpp Terrier.o dog.o trainable.o -o overload

Terrier.o: Terrier.cpp Terrier.h
	g++ -c -std=c++11 Terrier.cpp

dog.o: dog.cpp dog.h
	g++ -c -std=c++11 dog.cpp

trainable.o: trainable.cpp trainable.h
	g++ -c -std=c++11 trainable.cpp

clean:
	rm *.o 
