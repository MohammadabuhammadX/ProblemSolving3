
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
			arr[i][j] = RandomNumber(1, 1);

		}
	}

}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %0*d   ", 2, arr[i][j]);
			//cout << arr[i][j] << "    ";
		}
		cout << endl;
	}

}

int SumOfMatrix(int arr[3][3], short Rows, short Cols) {

	int sum = 0;

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

//bool CompareTwoMatrices(int arr[3][3], int arr1[3][3], short Rows, short Cols) {
//
//	return (SumOfMatrix(arr, Rows, Cols) == SumOfMatrix(arr1, Rows, Cols));
//
//}


bool CompareTwoMatrices(int arr[3][3], int arr1[3][3], short Rows, short Cols) {

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if (arr[i][j] != arr1[i][j]) {
				return false;
			}
		}
	}
	return true;
}

int main() {

	srand((unsigned)time(NULL));
	int arr[3][3];
	int arr1[3][3];

	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\n matrix1 :" << endl;
	PrintMatrix(arr, 3, 3);

	FillMatrixWithRandomNumbers(arr1, 3, 3);
	cout << "\n matrix2 :" << endl;
	PrintMatrix(arr1, 3, 3);

	if (!CompareTwoMatrices(arr, arr1, 3, 3)) {
		cout << "No : martices are NOT Equal..";
	}
	else
	{
		cout << "Yes : Martices are equal..";
	}

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
	class Problem2 {
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

		int RowSum(int arr[3][3], int Rows, int Cols) {
			int sumOfMatrixRow;
			for (int j = 0; j < Cols; j++)
			{
				sumOfMatrixRow += arr[Rows][j];
			}
			return sumOfMatrixRow;
		}

		void SumOfRowsMatrix(int arr[3][3], short Rows, short Cols) {

			cout << "The following is a Sum Of 3x3 random matrix:" << endl;
			for (int i = 0; i < Rows; i++)
			{
				cout << "The sum of row number " << i + 1 << " = " << RowSum(arr, i, Cols);
				cout << endl;
			}
		}

		int main()
		{
			srand((unsigned)time(NULL));
			int arr[3][3];

			FillMatrixWithRandomNumbers(arr, 3, 3);

			PrintMatrix(arr, 3, 3);

			SumOfRowsMatrix(arr, 3, 3);
		}
	};
	class Problem3 {
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

		int RowSum(int arr[3][3], int Rows, int Cols) {
			int sumOfMatrixRow = 0;
			for (int j = 0; j < Cols; j++)
			{
				sumOfMatrixRow += arr[Rows][j];
			}
			return sumOfMatrixRow;
		}

		void PrintMatrixFromArray(int arr[3], int size) {

			cout << "The Following are the sum of each row in the matrix: \n";

			for (int i = 0; i < size; i++)
			{
				cout << "Row " << i + 1 << " Sum = " << arr[i] << endl;
			}

		}

		void SumOfRowsMatrix(int arr[3][3], short Rows, short Cols) {

			int arrSum[3];
			//cout << "The following is a Sum Of 3x3 random matrix:" << endl;
			for (int i = 0; i < Rows; i++)
			{
				arrSum[i] = RowSum(arr, i, Cols);

				cout << endl;
			}
			PrintMatrixFromArray(arrSum, Rows);
		}


		int main()
		{
			srand((unsigned)time(NULL));
			int arr[3][3];

			FillMatrixWithRandomNumbers(arr, 3, 3);

			PrintMatrix(arr, 3, 3);

			SumOfRowsMatrix(arr, 3, 3);

		}
	};
	class Problem4Plus5 {
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

		int ColSum(int arr[3][3], int Rows, int Cols) {
			int sumOfMatrixRow = 0;
			for (int i = 0; i < Rows; i++)
			{
				sumOfMatrixRow += arr[i][Cols];
			}
			return sumOfMatrixRow;
		}

		void PrintMatrixFromArray(int arr[3], int size) {

			cout << "The Following are the sum of each Cols in the matrix: \n";

			for (int i = 0; i < size; i++)
			{
				cout << "Cols " << i + 1 << " Sum = " << arr[i] << endl;
			}

		}
		// 0,0      0,1     0,2
		// { 1 ,	 0 ,	 1} 
		// 1,0      1,1     1,2
		// { 1 ,	 0 ,	 1} 
		// 2,0     2,1      2,2
		// { 1 ,	 0 ,	 1} 

		void SumOfColsMatrix(int arr[3][3], short Rows, short Cols) {

			int arrSum[3];
			//cout << "The following is a Sum Of 3x3 random matrix:" << endl;
			for (int j = 0; j < Cols; j++)
			{
				arrSum[j] = ColSum(arr, Rows, j);

				cout << endl;
			}
			PrintMatrixFromArray(arrSum, Cols);
		}


		int main()
		{
			srand((unsigned)time(NULL));
			int arr[3][3];

			FillMatrixWithRandomNumbers(arr, 3, 3);

			PrintMatrix(arr, 3, 3);

			SumOfColsMatrix(arr, 3, 3);

		}
	};
	class Problem6 {
		void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short Cols) {
			short Counter = 0;
			for (short i = 0; i < Rows; i++) {
				for (short j = 0; j < Cols; j++) {
					Counter++;
					arr[i][j] = Counter;
				}
			}
		}

		void PrintMatrix(int arr[3][3], short Rows, short Cols) {
			for (short i = 0; i < Rows; i++) {
				for (short j = 0; j < Cols; j++) {
					cout << arr[i][j] << "     ";
				}
				cout << "\n";
			}
		}

		int main() {
			int arr[3][3];
			FillMatrixWithOrderedNumbers(arr, 3, 3);
			cout << "\nThe following is a 3x3 ordered matrix:\n";
			PrintMatrix(arr, 3, 3);
			return 0;
		}
	};
	class Problem7 {
		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithOrderNumbers(int arr[3][3], short Rows, short Cols) {
			int ctr = 1;
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = ctr;
					ctr++;
				}
			}

		}

		void PrintTransposedMatrix(int arr[3][3], short Rows, short Cols) {
			cout << "The following is the Transposeed matrix: \n";


			for (int i = 0; i < Cols; i++)
			{
				for (int j = 0; j < Rows; j++)
				{
					//arr[i][j] = arr[j][i];

					cout << arr[j][i] << "    ";
				}
				cout << endl;
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

			FillMatrixWithOrderNumbers(arr, 3, 3);

			PrintMatrix(arr, 3, 3);

			PrintTransposedMatrix(arr, 3, 3);
		}
	};
	class Problem7Course {
		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithOrderNumbers(int arr[3][3], short Rows, short Cols) {
			int ctr = 1;
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = ctr;
					ctr++;
				}
			}

		}

		void PrintTransposedMatrix(int arr[3][3], short Rows, short Cols) {
			cout << "The following is the Transposeed matrix: \n";


			for (int i = 0; i < Cols; i++)
			{
				for (int j = 0; j < Rows; j++)
				{
					//arr[i][j] = arr[j][i];

					cout << arr[j][i] << "    ";
				}
				cout << endl;
			}

		}

		void TransposeMatrixCourseApproch(int arr[3][3], int arrTransposed[3][3], short Rows, short Cols) {
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arrTransposed[i][j] = arr[j][i];
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
			//int arrTransposed[3][3];

			FillMatrixWithOrderNumbers(arr, 3, 3);

			//TransposeMatrixCourseApproch(arr, arrTransposed, 3, 3);

			PrintMatrix(arr, 3, 3);

			PrintTransposedMatrix(arr, 3, 3);
		}
	};
	class Problem8 {

		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(1, 10);

				}
			}

		}

		void PrintMatrix(int arr[3][3], short Rows, short Cols) {


			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					printf(" %0*d   ", 2, arr[i][j]);
					//cout << arr[i][j] << "    ";
				}
				cout << endl;
			}

		}

		void Multiply2Matrics(int arr[3][3], int arr1[3][3], int arrMultiply[3][3], short Rows, short Cols) {

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arrMultiply[i][j] = arr[i][j] * arr1[i][j];
				}cout << endl;
			}
		}

		int main()
		{
			srand((unsigned)time(NULL));
			int arr[3][3];
			int arr1[3][3];
			int arrMultiply[3][3];

			FillMatrixWithRandomNumbers(arr, 3, 3);
			cout << "Matrix 1:\n";
			PrintMatrix(arr, 3, 3);
			FillMatrixWithRandomNumbers(arr1, 3, 3);
			cout << "Matrix 2:\n";
			PrintMatrix(arr1, 3, 3);

			Multiply2Matrics(arr, arr1, arrMultiply, 3, 3);
			cout << "Matrix 1 x 2 = :\n";

			PrintMatrix(arrMultiply, 3, 3);
		}
	};
	class Promlem9 {
		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(1, 10);

				}
			}

		}

		void PrintMatrix(int arr[3][3], short Rows, short Cols) {


			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					printf(" %0*d   ", 2, arr[i][j]);
					//cout << arr[i][j] << "    ";
				}
				cout << endl;
			}

		}

		void PrintMiddleRowOfMatrix(int arr[3][3], short Rows, short Cols) {
			short middleRow = Rows / 2;
			for (int j = 0; j < Cols; j++) {
				printf(" %0*d   ", 2, arr[middleRow][j]);
			}
			cout << endl;
		}

		void PrintMiddleColumnOfMatrix(int arr[3][3], short Rows, short Cols) {
			short middleCol = Cols / 2;
			for (int i = 0; i < Rows; i++) {
				printf(" %0*d   ", 2, arr[i][middleCol]);
				cout << endl;
			}
		}



		int main()
		{
			srand((unsigned)time(NULL));
			int arr[3][3];

			FillMatrixWithRandomNumbers(arr, 3, 3);
			PrintMatrix(arr, 3, 3);

			cout << "Middle Row of matrix 1 is : \n";
			PrintMiddleRowOfMatrix(arr, 3, 3);

			cout << "Middle Column of matrix 2 is : \n";
			PrintMiddleColumnOfMatrix(arr, 3, 3);

		}
	};
	class Problem10 {
		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(1, 10);

				}
			}

		}

		void PrintMatrix(int arr[3][3], short Rows, short Cols) {


			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					printf(" %0*d   ", 2, arr[i][j]);
					//cout << arr[i][j] << "    ";
				}
				cout << endl;
			}

		}

		int SumOfMatrix(int arr[3][3], short Rows, short Cols) {

			int sum = 0;

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					sum += arr[i][j];
				}
			}
			return sum;
		}


		int main()
		{
			srand((unsigned)time(NULL));
			int arr[3][3];

			FillMatrixWithRandomNumbers(arr, 3, 3);
			PrintMatrix(arr, 3, 3);

			cout << "\nSum of matrix is :" << SumOfMatrix(arr, 3, 3) << endl;
		}
	};
	class Problem11ComapreAndTypical12{
		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(1, 2);

				}
			}

		}

		void PrintMatrix(int arr[3][3], short Rows, short Cols) {


			for (int i = 0; i < 3; i++)
			{
				for (int j = 0; j < 3; j++)
				{
					printf(" %0*d   ", 2, arr[i][j]);
					//cout << arr[i][j] << "    ";
				}
				cout << endl;
			}

		}

		int SumOfMatrix(int arr[3][3], short Rows, short Cols) {

			int sum = 0;

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					sum += arr[i][j];
				}
			}
			return sum;
		}

		bool CompareTwoMatrices(int arr[3][3], int arr1[3][3], short Rows, short Cols) {

			return (SumOfMatrix(arr, Rows, Cols) == SumOfMatrix(arr1, Rows, Cols));

		}


		//bool CompareTwoMatrices(int arr[3][3], int arr1[3][3], short Rows, short Cols) {
		//
		//	for (int i = 0; i < Rows; i++)
		//	{
		//		for (int j = 0; j < Cols; j++)
		//		{
		//			if (arr[i][j] != arr1[i][j]) {
		//				return false;
		//			}
		//		}
		//	}
		//	return true;
		//}

		int main() {

			srand((unsigned)time(NULL));
			int arr[3][3];
			int arr1[3][3];

			FillMatrixWithRandomNumbers(arr, 3, 3);
			cout << "\n matrix1 :" << endl;
			PrintMatrix(arr, 3, 3);

			FillMatrixWithRandomNumbers(arr1, 3, 3);
			cout << "\n matrix2 :" << endl;
			PrintMatrix(arr1, 3, 3);

			if (!CompareTwoMatrices(arr, arr1, 3, 3)) {
				cout << "No : martices are NOT Equal..";
			}
			else
			{
				cout << "Yes : Martices are equal..";
			}

		}
	};
}