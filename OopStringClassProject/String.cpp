#include "String.h"


String::String() 
	: size{ 1 }, capacity{ 2 }
{
	this->cstr = new char[capacity];
	this->cstr[0] = '\0';
}

String::String(const char* cstr)
	: size{ strlen(cstr) + 1 }, capacity{ size + size / 2 }
{
	this->cstr = new char[capacity];
	strcpy_s(this->cstr, size, cstr);
}

String::String(const String& str)
	: size{ str.size }, capacity{ str.capacity }
{
	this->cstr = new char[capacity];
	strcpy_s(this->cstr, size, str.cstr);
}

String::String(char symbol)
	: size{ 2 }, capacity{ 4 }
{
	this->cstr = new char[capacity];
	this->cstr[0] = symbol;
	this->cstr[1] = '\0';
}

String::String(const String& str, int count)
	: size{ str.size * count }, capacity{ size + size / 2 }
{
	this->cstr = new char[capacity];
	int index{};

	for (int i = 0; i < count; i++)
	{
		for (int s = 0; s < str.size - 1; s++)
			this->cstr[index++] = str.cstr[s];
	}
	this->cstr[index] = '\0';
}

std::ostream& operator<<(std::ostream& out, const String& str)
{
	out << str.cstr;
	return out;
}

String::~String()
{
	delete[] cstr;
}
