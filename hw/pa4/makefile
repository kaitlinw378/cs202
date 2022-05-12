employees: main.cpp employee.o payable.o manager.o shopworker.o
	g++ -std=c++11 main.cpp employee.o payable.o manager.o shopworker.o -o employees

employee.o: employee.cpp employee.h
	g++ -c -std=c++11 employee.cpp 

payable.o: payable.cpp payable.h	
	g++ -c -std=c++11 payable.cpp

manager.o: manager.cpp manager.h
	g++ -c -std=c++11 manager.cpp

shopworker.o: shopworker.cpp shopworker.h
	g++ -c -std=c++11 shopworker.cpp 

clean: 
	rm *.o employees 


