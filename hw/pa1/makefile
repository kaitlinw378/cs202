text_analyzer: word_analyzer.o driver.o
	g++ -o text_analyzer word_analyzer.o driver.o

word_analyzer.o: word_analyzer.cpp word_analyzer.h
	g++ -c word_analyzer.cpp

driver.o: driver.cpp word_analyzer.h
	g++ -c driver.cpp

clean: 
	rm *.o text_analyzer 
