
#include <iostream>
using namespace std;
class Matrix {
public:
	double* arr = new double[9];

	friend Matrix operator+(Matrix const& a, Matrix const& b)
	{
		Matrix result = Matrix();
		for (int i = 0; i < 9; i++) {
			result.arr[i] = a.arr[i] + b.arr[i];
		}
		return result;
	}

	friend Matrix operator*(Matrix const& a, Matrix const& b)
	{
		Matrix result = Matrix();
		for (int l = 0; l < 3; l++) {
			for (int i = 0; i < 3; i++) {
				result.arr[i + (l * 3)] = a.arr[0 + (l * 3)] * b.arr[i] + a.arr[1 + (l * 3)] * b.arr[i + 3] + a.arr[2 + (l * 3)] * b.arr[i + 6];
			}
		}
		return result;
	}

	void add() {
		for (int i = 0; i < 9; i++) {
			arr[i] = i;
		}
	}

	void print() {
		for (int i = 0; i < 9; i++) {
			if (i == 3 || i == 6) {
				cout << endl;
			}
			cout << " " << arr[i];
		}
		cout << endl << " " << endl;
	}
};

int main() {
	Matrix a = Matrix(), b = Matrix(), c = Matrix();
	
	a.add();
	b.add();

	c = a + b;
	c.print();

	c = a * b;
	c.print();

	getchar();
	return 0;
}