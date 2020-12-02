#include <iostream>
#include "String.h"
using namespace std;
int main() {
	String one("ddd");
	String two("zzz");
	cout << one.getStr() << endl;
	cout << two.getStr() << endl;
	swapStrngs(move(one),move(two));
	cout << one.getStr() << endl;
	cout << two.getStr() << endl;
	return 0;
}