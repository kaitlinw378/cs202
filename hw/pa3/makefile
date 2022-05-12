audioprocessor: main.cpp Wav.o echo.o noisegate.o limiter.o
	g++ -std=c++11 main.cpp Wav.o echo.o limiter.o noisegate.o -o audioprocessor

Wav.o: Wav.cpp Wav.h
	g++ -c -std=c++11 Wav.cpp

echo.o: echo.cpp echo.h
	g++ -c -std=c++11 echo.cpp

noisegate.o: noisegate.cpp noisegate.h
	g++ -c -std=c++11 noisegate.cpp

limiter.o: limiter.cpp limiter.h
	g++ -c -std=c++11 limiter.cpp

clean:
	rm *.o audioprocessor
