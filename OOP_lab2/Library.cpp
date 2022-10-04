#include "Library.h"

Library::Library()
{

}

void Library::FillBook()
{
	for (int i = 0; i < 2; i++)
	{
		Book1 book;
		IOWorker.Input(book);
		books.push_back(book);
	}
}

void Library::Show()
{

	cout << "������ ��� ������: " << endl;
	for (int i = 0; i < books.size(); i++)
	{
		IOWorker.Output(books[i]);
	}
}

void Library::ShowByAvtor()
{
	cout << "����� ������: ";
	string value;
	getline(cin, value);
	cout << "���������: " << value << ":" << endl;
	for (Book1 book : books)
	{
		if (value == book.getAvtor())
			IOWorker.Output(book);
	}
}

void Library::ShowByName()
{
	cout << "����� �� ������ �����: ";
	string value;
	getline(cin, value);
	cout << "���������: " << value << ":" << endl;
	for (Book1 book : books)
	{
		if (value == book.getName())
			IOWorker.Output(book);
	}

}

void Library::ShowByVidavn()
{
	cout << "����� �� ������������: ";
	string value;
	getline(cin, value);
	cout << "���������: " << value << ":" << endl;
	for (Book1 book : books)
	{
		if (value == book.getVidavn())
			IOWorker.Output(book);
	}
}

void Library::ShowByYear_vidania()
{
	cout << "����� �� ����� �������: ";
	int year_vidania;
	cin >> year_vidania;
	cout << "\n���������: " << year_vidania << endl;
	for (Book1 book : books)
	{
		if (year_vidania == book.getYear_vidania())
			IOWorker.Output(book);
	}
}
