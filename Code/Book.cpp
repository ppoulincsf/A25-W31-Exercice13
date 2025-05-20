#include "stdafx.h"
#include <iostream>
#include "Book.h"


Book::Book()
  : Book(0, "Unknown", 0)
{
}

Book::Book(const Book& src)
	: id(src.id), title(src.title), year(src.year)
{
}

Book::Book(unsigned int _id, string _title, unsigned int _year)
	: id(_id), title(_title), year(_year)
{

}


Book::~Book()
{
}

void Book::display() const
{
		cout << "\t{ ";
		cout << "\tId : " << this->id << ",";
		cout << "\tTitle : " << this->title << ",";
		cout << "\tYear : " << this->year;
		cout << "\t}" << endl;
}

std::ostream& operator<<(std::ostream& os, const Book& book)
{
	os << "\t{ ";
	os << "\tId : " << book.id << ",";
	os << "\tTitle : " << book.title << ",";
	os << "\tYear : " << book.year;
	os << "\t}" << endl;

	return os;
}

bool Book::operator==(const Book& book) const
{
  return (this->id == book.id);
}


bool Book::operator < (const Book& book) const
{
	return this->id < book.id;
}

bool Book::operator > (const Book& book) const
{
	return this->id > book.id;
}


bool Book::operator != (const Book& book) const
{
	return this->id != book.id;
}
