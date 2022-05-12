//Edited by: Kaitlin White
//Lab 4 
//Date: 2/18/21

#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

class Book{
	string title, author, publisher;
	double price;
	int copyrightYear;
public:
	
	Book();
	Book(string, string, int, double);
	Book(string, string, string, int, double);
	Book(const Book&);

	bool valid() const;
	std::string getTitle() const;
	std::string getAuthor() const;
	std::string getPublisher() const;
	int getYear() const;
	double getPrice() const;

	void setTitle(string);
	void setAuthor(string);
	void setPublisher(string);
	void setYear(int);
	void setPrice(double);

	void display();
};

#endif
