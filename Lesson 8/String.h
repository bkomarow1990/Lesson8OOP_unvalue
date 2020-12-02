#pragma once
#include <iostream>
using namespace std;
class String
{
public:
	String();
	String(const size_t & size);
	String(const char* str);
	String& operator=(const String& other);
	String& operator=(String&& other)noexcept;
	String(const String& str);
	void setStringSize(const size_t& size);
	const char* getStr()const;
	
	// Lvalue Rvalue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include <iostream>
//	using namespace std;
//	void funcLValueRef(int& number) // reference to modifable LVALUE
//	{
//		cout << "funcLValueRef : " << ++number << endl;
//	}
//	void funcLConstValueRef(const int& number) // reference to LVALUE nomodifable
//	{
//		cout << "funcLConstValueRef : " << number << endl;
//	}
//	void funcRightValueRef(int&& number) //
//	{
//		number *= 5;
//		cout << "funcRightValueRef : " << number << endl;
//	}
//	int main()
//	{
//		//Lvalue(modifable, nonmodifable) Rvalue
//		int val = 123; //val = lvalue rvalue = 123
//		cout << &val << endl;
//		const int SIZE = 100;
//		cout << &SIZE << endl; // lvalue nonmodifable
//		//cout << &(arr[0] + 25) << endl;
//		int arr[3]{ 10, 20, 30 };
//		arr[1]++;
//		funcLValueRef(arr[0]);
//		//funcLValueRef(arr[0] + 25); // error compile we pass Rvalue
//		funcLConstValueRef(SIZE);
//		funcLConstValueRef(arr[2]);
//		funcLConstValueRef(arr[0] + 33); // rvalue ---> const Lvalue &
//
//		int&& ref = arr[0] + 1;// int&& -reference to RVALUE
//		++ref;
//		cout << "& ref : " << &ref << endl;
//	}
private:
	size_t size;
	char* mstring;
};
void swapStrngs(String&& one,String&& other);