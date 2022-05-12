//Author: Kaitlin White
//Date: 2/26/21
//lab 5: composition
//.cpp file for Heart class

#include "heart.h"

Heart::Heart(int rate){
	Heart::rate = rate;
}

const int &Heart::getRate() const{
	return rate;
}

void Heart::setRate(const int &rate){
	Heart::rate = rate;
}

bool Heart::ok(){
	return rate > 50;

}
