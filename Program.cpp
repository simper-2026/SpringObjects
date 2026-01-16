
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int add(int a, int b);

void MemoryLeak() {
	long long limit = 10000;
	for (int i = 0; i < limit; i++)
	{
		new int[limit];
	}
}

void add (int a, int b, int &s){
	s = a + b;
}

int main() {

	//MemoryLeak();

	cout << sizeof(bool) << endl;
	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(short) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(float) << endl;

	vector<int> list;// = { 1,2,3,4,6,7,7,8 };


	for (auto element : list) {
		cout << element << ", ";
	}
	cout << endl;
	for (int i = 0; i < list.size(); i++)
	{
		cout << list[i] << ", ";
	}
	cout << endl;

	int j = 0;
	while (j < list.size()) {
		cout << list[j] << ", ";

		j++;
	}

}



int add(int a, int b) {
	return a + b;
}
