
#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Rectangle {
private:
	double length;
	double width;
	double area;

	void UpdateArea() {
		area = length * width;
	}
public:

	Rectangle(int l, int w) {
		length = l;
		width = w;
		UpdateArea();
	}
	int GetWidth();
	int GetLength();

	int GetArea() {
		return area;
	}
	void SetLength(int l) {
		length = l;
		UpdateArea();
	}
};


//cin.ignore()

int main() {
	Rectangle r1(3,4);

	cout << "Area: " << r1.GetArea() << endl;
	r1.SetLength(2);
	cout << "Area: " << r1.GetArea() << endl;

}



int Rectangle::GetWidth()
{
	return width;
}


int Rectangle::GetLength() {
	return length;
}
