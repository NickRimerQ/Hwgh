
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

	getchar();
	return 0;
}