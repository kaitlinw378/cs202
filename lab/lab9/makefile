vehicles: main.cpp plane.o car.o vehicle.o
	g++ -std=c++11 main.cpp plane.o car.o vehicle.o -o vehicles

plane.o: plane.cpp plane.h
	g++ -c -std=c++11 plane.cpp

car.o: car.cpp car.h
	g++ -c -std=c++11 car.cpp

vehicle.o: vehicle.cpp vehicle.h
	g++ -c -std=c++11 vehicle.cpp

clean:
	rm *.o
