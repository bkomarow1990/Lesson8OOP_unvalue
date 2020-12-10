#include <iostream>
#include "String.h"
using namespace std;
int main() {
	String one("Microsofdt"); 
	String two("Windows");
	// mcrft
	//cout<<one.getSize();
	//cout<<two.getSize();
	cout << "=======================" << endl;
	cout<<one.concat(two)<<endl;
	cout << one.combinateStrings(two) << endl;
	cout<<one* two<<endl;
	cout << "===========" << endl;
	cout << one / two<<endl;
	cout << "Increment" << endl;
	String inc("abc");
	++inc;
	cout << inc << endl;
	String inc2("abc2");
	inc2++;
	cout <<boolalpha<< (one > two)<<endl;
	cout << boolalpha << (inc != inc2) << endl;
	cout << "Reverse" << endl;
	String reverse_test("Ter43rer34werwe4st");
	cout << !reverse_test << endl;
	cout << "Division" << endl;
	String Microsoft ("Microsoft");
	String Windows("Windows");
	cout << Microsoft.division(Windows);
	return 0;
}