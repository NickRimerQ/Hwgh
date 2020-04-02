
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
};
