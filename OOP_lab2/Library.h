#pragma once
#include "Book1.h"
#include "BookIO.h"
#include <vector>
#include <iostream>
#include <windows.h>
using namespace std;
class Library
{
private:
	std::vector<Book1> books;
	BookIO IOWorker;
public:
	Library();
	vector<Book1>getBooks();
	void FillBook();
	void Show();
	void ShowByAvtor();
	void ShowByName();
	void ShowByVidavn();
	void ShowByYear_vidania();
	void eddBook(Book1 book);
};
