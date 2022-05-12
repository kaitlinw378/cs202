animal: main.cpp CatSpeakBehavior.o DogSpeakBehavior.o Animal.o
	g++ -std=c++11 main.cpp CatSpeakBehavior.o DogSpeakBehavior.o Animal.o -o animal

CatSpeakBehavior.o: CatSpeakBehavior.cpp CatSpeakBehavior.h
	g++ -c -std=c++11 CatSpeakBehavior.cpp

DogSpeakBehavior.o: DogSpeakBehavior.cpp DogSpeakBehavior.h
	g++ -c -std=c++11 DogSpeakBehavior.cpp

Animal.o: Animal.cpp Animal.h
	g++ -c -std=c++11 Animal.cpp
