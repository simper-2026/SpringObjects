
#include <iostream>
#include <string>
#include <vector>

using namespace std;


void MemoryLeak() {
	long long limit = 1000000;
	int* ptr = nullptr;
	for (int i = 0; i < limit; i++)
	{
		ptr = new int[limit];
		delete ptr;
	}
}

void add (int a, int b, int &s){
	cout << "s: " << &s << endl;
	cout << "a: " << &a << endl;
	cout << "b: " << &b << endl;
	
	s = a + b;
}

int main() {
	MemoryLeak();

	int a = 3;
	int* p = nullptr;
	p = new int;


	switch (a)
	{
	case 3:
		cout << "Three";
		//break;
	case 2:
		cout << "Two";
		break;
	default:
		break;
	}

	int* ptr = nullptr;
	ptr = new int[10];

	*ptr = 12;
	*(ptr + 1) = 13;
	ptr[2] = 48;

	ptr++;

	//MemoryLeak();
	
	int num, number, sum;
	num = 1;
	number = 2;
	sum = 27;

	add(num, number, sum);
	cout << sum <<  endl;
	cout << "sum: " << &sum << endl;
	cout << "num: " << &num << endl;
	cout << "number: " << &number << endl;

}

