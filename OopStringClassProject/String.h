#pragma once
#include <iostream>
#include <string.h>

class String
{
	size_t size;
	size_t capacity;
	char* cstr;
public:
	String();
	String(const char* cstr);
	String(const String& str);
	explicit String(char symbol);
	String(const String& str, int count);

	String Assign(const char* cstr);
	String Assign(const String& str);
	String Assign(char symbol);
	String Assign(const String& str, int count);

	String operator=(const char* cstr);
	String operator=(const String& str);
	String operator=(char symbol);

	char& At(int index);
	char& operator[](int index);

	int Length();
	bool IsEmpty();

	void Insert(const char* cstr);
	void Insert(char symbol);
	void Insert(String& str);

	void PushBack(const char* cstr);
	void PushBack(char symbol);
	void PushBack(String& str);

	void operator+(const char* cstr);
	void operator+(char symbol);
	void operator+(String& str);

	String Erase(int index, int count);
	String PopBack(int count);

	friend bool operator<(String str1, String str2);
	friend bool operator>(String str1, String str2);
	friend bool operator<=(String str1, String str2);
	friend bool operator>=(String str1, String str2);
	friend bool operator==(String str1, String str2);
	friend bool operator!=(String str1, String str2);

	~String();

	friend std::ostream& operator<<(std::ostream& out, const String& str);
};

