
#include <iostream>
#include<vector>

using namespace std;

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}

}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	cout << "The following is a 3x3 random matrix:" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout <<"The sum rows number" << i + 1 <<" is = " << arr[i][j] + arr[i][j] + arr[i][j];
		}
		cout << endl;
	}

}
/*void PrintMatrix(int arr[3][3], short Rows, short Cols) {

	cout << "The following is a 3x3 random matrix:" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << "    ";
		}
		cout << endl;
	}

}*/

int main()
{
	srand((unsigned)time(NULL));
	int arr[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);

	PrintMatrix(arr, 3, 3);

}

namespace Problems {

	class Problem1 {
		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(1, 100);
				}
			}

		}

		void PrintMatrix(int arr[3][3], short Rows, short Cols) {

			cout << "The following is a 3x3 random matrix:" << endl;

			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					cout << arr[i][j] << "    ";
				}
				cout << endl;
			}

		}

		int main()
		{
			srand((unsigned)time(NULL));
			int arr[3][3];

			FillMatrixWithRandomNumbers(arr, 3, 3);

			PrintMatrix(arr, 3, 3);

		}
	};

}