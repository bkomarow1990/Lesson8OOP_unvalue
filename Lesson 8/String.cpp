#include "String.h"
#include "String.h"

String::String()
	:String(80)
{

}

String::String(const size_t& size)
{
	this->size = size;
	mstring = new char[size] {};
}

String::String(const char* str)
{
	if (str==nullptr)
	{
		setStringSize(80);
		return;
	}
	setStringSize(strlen(str) + 1);
	strcpy_s(this->mstring, size, str);
}

String& String::operator=(const String& other)
{
	if (this!=&other)
	{
		if (mstring!=nullptr)
		{
			delete[]mstring;
		}
		size = other.size;
		mstring = new char[size];
		strcpy_s(this->mstring,other.size,other.mstring);
	}
		return*this;
}

String& String::operator=(String&& other) noexcept
{
	if (this!=&other)
	{
		if (mstring!=nullptr)
		{
			delete[]mstring;
			this->mstring = other.mstring;
			other.mstring = nullptr;
			other.size = 0;
		}
	}
	return *this;
}

String::String(const String& str)
{
	*this = str;
}

void String::setStringSize(const size_t& size)
{
	this->size = size;
	mstring = new char[size] {};
}

const char* String::getStr() const
{
	return mstring;
}

void swapStrngs(String&& one, String&& other)
{
	String temp(move(one));
	one = move(other);
	other = move(temp);
}
