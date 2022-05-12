analyzer: stat_finder.o analyzer.o
	g++ -o analyzer stat_finder.o analyzer.o

stat_finder.o: stat_finder.cpp stat_finder.h
	g++ -c stat_finder.cpp

analyzer.o: analyzer.cpp
	g++ -c analyzer.cpp

clean:
	rm *.o analyzer

