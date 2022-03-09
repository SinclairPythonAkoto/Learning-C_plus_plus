#include <iostream>

using namespace std;

int main()
{
	// creating a matrix 
	// 4 x 5 list (array)
	int numberGrid[4][5] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20}
	};
	// finding data from the matrix
	cout << numberGrid[0][0] << endl;
	cout << numberGrid[2][4] << endl;

	// changing data within th ematrix
	numberGrid[0][1] = 99;
	cout << numberGrid[0][1] << endl;

	// nested for loops
	for(int row = 0; row < 4; row++){
		for(int col = 0; col < 5; col++){
			cout << numberGrid[row][col] << ",";
	}
		cout << endl;
	}

	return 0;
}
