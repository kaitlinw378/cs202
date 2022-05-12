
#include <iostream>
#include <chrono>

using namespace std::chrono;

const int TERM = 20;
const int NUM_RUNS = 10;

long long int recursiveFact(int);
long long int iterativeFact(int);

int main(){
	long long int rFact, iFact;
	double rSum = 0, iSum = 0;
	int rNano[NUM_RUNS];
	int iNano[NUM_RUNS];

	for(int i = 0; i < NUM_RUNS; i++){
		auto rStart = steady_clock::now();
		rFact = recursiveFact(TERM);
		auto rEnd = steady_clock::now();
		rNano[i] = duration_cast<nanoseconds>(rEnd - rStart).count();
	}

	for(int i = 0; i < NUM_RUNS; i++){
		auto iStart = steady_clock::now();
		iFact = iterativeFact(TERM);
		auto iEnd = steady_clock::now();
		iNano[i] = duration_cast<nanoseconds>(iEnd - iStart).count();
	}

	std::cout << "RECURSIVE\t\tITERATIVE" << std::endl;
	rFact = recursiveFact(TERM);
	iFact = iterativeFact(TERM);
	std::cout << rFact << "\t" << iFact << std::endl;
	for(int i = 0; i < NUM_RUNS; i++){
		std::cout << rNano[i] << "\t\t\t" << iNano[i] << std::endl;
		rSum += rNano[i];
		iSum += iNano[i];
	}
	std::cout << "Average" << std::endl;
	std::cout << rSum / NUM_RUNS << "\t\t\t" << iSum / NUM_RUNS << std::endl;	

	return 0;
}

long long int recursiveFact(int term){
  // put your code here
  if(term > 0){
	  return term * recursiveFact(term - 1);
  }else{
	  return 1;
  }
  return 0;
}

long long int iterativeFact(int term){
	long long int product = 1;
	while(term > 0){
		product *= term--;
	}
	return product;
}
