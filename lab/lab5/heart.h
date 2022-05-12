//Author: Kaitlin White
//Date: 2/26/21
//lab 5: composition
//.h file for Heart class

#ifndef HEART_H
#define HEART_H

#include<iostream>
#include<string>

class Heart{
	
	int rate;

	public:

		//Heart();

		Heart(int rate);

		const int &getRate() const;

		void setRate(const int &rate);

		bool ok();

};



#endif
