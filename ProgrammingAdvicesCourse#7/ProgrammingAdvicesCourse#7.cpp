#include <iostream>
#include<vector>
#include<string>
#include <cctype>
#include<iomanip>

using namespace std;

string ReadString(string message) {

	cout << message;
	string input;

	getline(cin, input);

	return input;

}
void PrintMessage(string message) {
	cout << message;
}

vector<string> Split(string userInput, string spaces) {

	vector<string>vWords;

	short pos = 0;

	string word;

	while ((pos = userInput.find(spaces)) != string::npos) {

		word = userInput.substr(0, pos);
		if (!word.empty()) {
			vWords.push_back(word);
		}
		userInput.erase(0, pos + spaces.length());
	}
	if (!userInput.empty()) {
		vWords.push_back(userInput);
	}
	return vWords;
}

string ReverseString(string S1) {

	vector<string> vString = Split(S1, " "); 

	string S2 = "";

	vector<string>::iterator iter = vString.end();

	while (iter != vString.begin())
	{
		--iter;
		S2 += *iter + " ";
	}


	return S2.substr(0, S2.length() - 1);

}

string ReverseWordsInString(string S1) {

	vector<string> vString = Split(S1 , " ");
	string S2 = "";

	for (int i = vString.size() - 1; i >= 0; --i) {
		S2 += vString[i] + " ";
	}

	if (!S2.empty()) {
		S2.pop_back(); 
	}

	return S2;
}

int main() {

	PrintMessage("Using Arrays:\n");
	cout << ReverseWordsInString(ReadString("Please Enter A String : ")) << endl;

	system("pause>0");
	return 0;
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
	class Problem9 {
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
	class Problem11ComapreAndTypical12 {
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
	class Problem13 {
		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(0, 1);

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

		bool IsIdenticalTwoMatrices(int arr[3][3], short Rows, short Cols) {

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					if (i == j && arr[i][j] != 1) {
						return false;
					}
					else if (i != j && arr[i][j] != 0)
					{
						return false;
					}
				}
			}
			return true;
		}

		int main() {

			srand((unsigned)time(NULL));
			int arr[3][3] = { {1,0,0},{0,1,0},{0,0,1} };

			int tries = 0;
			while (true) {

				tries++;

				FillMatrixWithRandomNumbers(arr, 3, 3);

				cout << "\nMatrix #" << tries << " :" << endl;
				PrintMatrix(arr, 3, 3);


				if (IsIdenticalTwoMatrices(arr, 3, 3)) {
					cout << "Yes: Matrix is Identical!" << endl;
					break;
				}
				else {
					cout << "No: Matrix is NOT Identical..." << endl;
				}
			}
		}

	};
	class Problem14 {
		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(0, 1);

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

		bool IsScalarTwoMatrices(int arr[3][3], short Rows, short Cols) {

			int firstElement = arr[0][0];

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{

					/*
					0,0	   0.1   0.2
					{ 8  ,  0  ,  0}

					{ 0  ,  8  ,  0}

					{ 0  ,  0  ,  8}

					*/
					if (i == j && arr[i][j] != firstElement) {
						return false;
					}
					else if (i != j && arr[i][j] != 0)
					{
						return false;
					}
				}
			}
			return true;
		}

		int main() {

			srand((unsigned)time(NULL));
			int arr[3][3] = { {2,0,0},{0,2,0},{0,0,2} };

			//FillMatrixWithRandomNumbers(arr1, 3, 3);

			PrintMatrix(arr, 3, 3);


			if (IsScalarTwoMatrices(arr, 3, 3)) {
				cout << "Yes: Matrix is Scalar!" << endl;
			}
			else {
				cout << "No: Matrix is NOT Scalar!..." << endl;
			}

		}
	};
	class Problem15 {
		int ReadNumber(string message) {

			int num = 0;
			cout << message;


			while (true) {
				if (cin >> num)
					return num;
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid Number, Enter a valid One" << endl;
				}
			}
			return num;
		}

		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(0, 1);

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

		int CountNumberInMatrx(int arr[3][3], int& userInput, short Rows, short Cols) {

			int ctr = 0;

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					if (arr[i][j] == userInput) {
						ctr++;
					}
				}
			}
			return ctr;
		}

		int main() {

			srand((unsigned)time(NULL));

			int arr[3][3];

			int userInput = ReadNumber("Please Enter a Number.. from 1 - 100 : ");

			FillMatrixWithRandomNumbers(arr, 3, 3);

			PrintMatrix(arr, 3, 3);

			cout << "Number " << userInput << " count in matrix is = " << CountNumberInMatrx(arr, userInput, 3, 3) << endl;

		}
	};
	class Problem16 {
		int ReadNumber(string message) {

			int num = 0;
			cout << message;


			while (true) {
				if (cin >> num)
					return num;
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid Number, Enter a valid One" << endl;
				}
			}
			return num;
		}

		int RandomNumber(int From, int To) {
			return rand() % (To - From + 1) + From;
		}

		void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					arr[i][j] = RandomNumber(0, 1);

				}
			}

		}

		void PrintMatrix(int arr[3][3], short Rows, short Cols) {


			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					printf(" %0*d   ", 2, arr[i][j]);
					//cout << arr[i][j] << "    ";
				}
				cout << endl;
			}

		}

		int CountNumberInMatrx(int arr[3][3], int userInput, short Rows, short Cols) {

			int ctr = 0;

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					if (arr[i][j] == userInput) {
						ctr++;
					}
				}
			}
			return ctr;
		}

		bool IsSparceMatrix(int arr[3][3], short Rows, short Cols) {

			return(CountNumberInMatrx(arr, 0, 3, 3) >= ceil((float)(Rows * Cols) / 2));
		}

		int main() {

			srand((unsigned)time(NULL));

			int arr[3][3];

			FillMatrixWithRandomNumbers(arr, 3, 3);

			PrintMatrix(arr, 3, 3);

			if (!IsSparceMatrix(arr, 3, 3)) {
				cout << "No: It's NOT Sparce";
			}
			else
			{
				cout << "Yes: It is Sparce";
			}
		}

	};
	class Problem17 {
		int ReadNumber(string message) {

			int num = 0;
			cout << message;


			while (true) {
				if (cin >> num)
					return num;
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid Number, Enter a valid One" << endl;
				}
			}
			return num;
		}

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


			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					printf(" %0*d   ", 2, arr[i][j]);
					//cout << arr[i][j] << "    ";
				}
				cout << endl;
			}

		}

		bool IsNumberInMatrix(int arr[3][3], int userNumber, short Rows, short Cols) {

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					if (arr[i][j] == userNumber) {
						return true;
					}
				}
			}
			return false;
		}

		int main() {

			srand((unsigned)time(NULL));

			int arr[3][3];
			int userInput;
			do {
				userInput = ReadNumber("Please Enter Number between 1 - 100: ");
				FillMatrixWithRandomNumbers(arr, 3, 3);
				PrintMatrix(arr, 3, 3);

				if (!IsNumberInMatrix(arr, userInput, 3, 3)) {
					cout << "No: It's NOT there. Try again.\n";
				}
				else {
					cout << "Yes: It is there!\n";
					break;
				}
			} while (true);
		}
	};
	class Problem18 {
		void PrintMessage(string message) {
			cout << message << endl;
		}

		int ReadNumber(string message) {

			int num = 0;
			cout << message;


			while (true) {
				if (cin >> num)
					return num;
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid Number, Enter a valid One" << endl;
				}
			}
			return num;
		}

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


			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					printf(" %0*d   ", 2, arr[i][j]);
					//cout << arr[i][j] << "    ";
				}
				cout << endl;
			}

		}

		bool IsNumberInMatrix(int arr[3][3], int userNumber, short Rows, short Cols) {

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					if (arr[i][j] == userNumber) {
						return true;
					}
				}
			}
			return false;
		}

		void PrintIntersectedNumbersInTwoMatrices(int arr[3][3], int arr1[3][3], short Rows, short Cols) {

			int Number = 0;

			for (int i = 0; i < Rows; i++)
			{
				for (int k = 0; k < Cols; k++)
				{
					Number = arr[i][k];
					if (IsNumberInMatrix(arr1, Number, Rows, Cols)) {
						cout << setw(3) << Number << "	";
					}
				}
			}

		}

		int main() {

			srand((unsigned)time(NULL));

			int arr[3][3];
			int arr1[3][3];

			PrintMessage("Matrix1 :");
			FillMatrixWithRandomNumbers(arr, 3, 3);
			PrintMatrix(arr, 3, 3);

			PrintMessage("Matrix2 :");
			FillMatrixWithRandomNumbers(arr1, 3, 3);
			PrintMatrix(arr1, 3, 3);

			PrintIntersectedNumbersInTwoMatrices(arr, arr1, 3, 3);

		}
	};
	class Problem19MyCode {
		void PrintMessage(string message) {
			cout << message << endl;
		}

		int ReadNumber(string message) {

			int num = 0;
			cout << message;


			while (true) {
				if (cin >> num)
					return num;
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid Number, Enter a valid One" << endl;
				}
			}
			return num;
		}

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


			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					printf(" %0*d   ", 2, arr[i][j]);
					//cout << arr[i][j] << "    ";
				}
				cout << endl;
			}

		}

		void InsertNumberOfMatrixToVector(int arr[3][3], vector<int>& MatrixElement, int Rows, int Cols) {

			for (int i = 0; i < Rows; i++)
			{
				for (int j = 0; j < Cols; j++)
				{
					MatrixElement.push_back(arr[i][j]);
				}
			}
		}

		int GetMaxOfVector(vector<int>& MatrixElement, int Rows, int Cols) {

			int length = Rows * Cols;
			int maxNumber = MatrixElement[0];
			for (int i = 1; i < length; i++)
			{
				//if (MatrixElement[i] >= maxNumber) {
				//	MatrixElement[i] = maxNumber;
				//}
				if (MatrixElement[i] > maxNumber) {
					maxNumber = MatrixElement[i];
				}

			}

		}

		int GetMinOfVector(vector<int>& MatrixElement, int Rows, int Cols) {

			int length = Rows * Cols;
			int minNumber = MatrixElement[0];
			for (int i = 1; i < length; i++)
			{
				//if (minNumber <= MatrixElement[i]) {
				//	minNumber =MatrixElement[i];
				//}
				if (MatrixElement[i] < minNumber) {
					minNumber = MatrixElement[i];
				}
			}
			return minNumber;

		}

		int main() {

			srand((unsigned)time(NULL));

			int arr[3][3];

			PrintMessage("Matrix1 :");
			FillMatrixWithRandomNumbers(arr, 3, 3);
			PrintMatrix(arr, 3, 3);

			vector<int> insertAllElementFromMatrix;

			InsertNumberOfMatrixToVector(arr, insertAllElementFromMatrix, 3, 3);

			cout << "Maximum  Number is : " << GetMaxOfVector(insertAllElementFromMatrix, 3, 3) << endl;
			cout << "Minimum Number is : " << GetMinOfVector(insertAllElementFromMatrix, 3, 3) << endl;

		}
	};
	class Problem19CourseApproch {
		void PrintMatrix(int arr[3][3], short Rows, short Cols) {
			for (short i = 0; i < Rows; i++) {
				for (short j = 0; j < Cols; j++) {
					cout << setw(3) << arr[i][j] << "     ";
				}
				cout << "\n";
			}
		}

		int MinNumberInMatrix(int Matrix1[3][3], short Rows, short Cols) {
			int Min = Matrix1[0][0];
			for (short i = 0; i < Rows; i++) {
				for (short j = 0; j < Cols; j++) {
					if (Matrix1[i][j] < Min) {
						Min = Matrix1[i][j];
					}
				}
			}
			return Min;
		}

		int MaxNumberInMatrix(int Matrix1[3][3], short Rows, short Cols) {
			int Max = Matrix1[0][0];
			for (short i = 0; i < Rows; i++) {
				for (short j = 0; j < Cols; j++) {
					if (Matrix1[i][j] > Max) {
						Max = Matrix1[i][j];
					}
				}
			}
			return Max;
		}

		int main() {
			int Matrix1[3][3] = { {77, 5, 12}, {22, 20, 6}, {14, 3, 9} };

			cout << "\nMatrix1:\n";
			PrintMatrix(Matrix1, 3, 3);

			cout << "\nMinimum Number is: " << MinNumberInMatrix(Matrix1, 3, 3);
			cout << "\nMax Number is: " << MaxNumberInMatrix(Matrix1, 3, 3);

			system("pause>0");
			return 0;
		}
	};
	class Problem20 {
		void PrintMatrix(int arr[3][3], short Rows, short Cols) {
			for (short i = 0; i < Rows; i++) {
				for (short j = 0; j < Cols; j++) {
					cout << setw(3) << arr[i][j] << "     ";
				}
				cout << "\n";
			}
		}

		int IsPalindromeMatrix(int Matrix1[3][3], short Rows, short Cols) {
			for (short i = 0; i < Rows; i++) {
				for (short j = 0; j < Cols / 2; j++) {
					if (Matrix1[i][j] != Matrix1[i][Cols - 1 - j]) {
						return false;
					}
				}
			}
			return true;
		}

		int main() {
			int Matrix1[3][3] = { {1, 2, 1}, {5, 5, 5}, {7, 3, 7} };

			cout << "\nMatrix1:\n";
			PrintMatrix(Matrix1, 3, 3);

			if (IsPalindromeMatrix(Matrix1, 3, 3)) {
				cout << "\nYes: Matrix is Palindrome\n";
			}
			else {
				cout << "\nNo: Matrix is NOT Palindrome\n";
			}

			system("pause>0");
			return 0;
		}
	};
	class Problem21 {
		void PrintMessage(string message) {
			cout << message << endl;
		}

		int ReadNumber(string message) {

			int num = 0;
			cout << message;


			while (true) {
				if (cin >> num)
					return num;
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid Number, Enter a valid One" << endl;
				}
			}
			return num;
		}

		void GenerateFibonacciSeriesOfN(int Number) {
			int previousNum1 = 1, previousNum2 = 1, currentNum;

			if (Number >= 1) cout << previousNum1 << "  ";
			if (Number >= 2) cout << previousNum2 << "  ";

			for (int i = 3; i <= Number; i++) {
				currentNum = previousNum1 + previousNum2;
				cout << currentNum << "  ";
				previousNum1 = previousNum2;
				previousNum2 = currentNum;
			}
		}

		int main() {

			srand((unsigned)time(NULL));

			GenerateFibonacciSeriesOfN(ReadNumber("Please Enter a Number : "));

		}
	};
	class Problem22 {
		void PrintMessage(string message) {
			cout << message << endl;
		}

		int ReadNumber(string message) {

			int num = 0;
			cout << message;


			while (true) {
				if (cin >> num)
					return num;
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid Number, Enter a valid One" << endl;
				}
			}
			return num;
		}

		void GenerateFibonacciSeriesOfNUsingRecursion(int Number, int Prev1, int Prev2) {

			int fibNumber = 0;

			if (Number > 0)
			{
				fibNumber = Prev1 + Prev2;
				Prev2 = Prev1;
				Prev1 = fibNumber;
				cout << fibNumber << "  ";
				GenerateFibonacciSeriesOfNUsingRecursion(Number - 1, Prev1, Prev2);
			}
		}

		int main() {

			srand((unsigned)time(NULL));

			GenerateFibonacciSeriesOfNUsingRecursion(ReadNumber("Please Enter a Number : "), 0, 1);

		}
	};
	class Problem23 {
		string ReadString(string message) {

			cout << message;

			string userInput;

			getline(cin, userInput);

			return userInput;
		}

		void PrintFirstLetterOfWord(string sentance) {
			//Mohammad Abu hammad :M A h
			// Mohammad Abu hammad : M A h
			//    :   

			if (sentance.empty())
				return;

			bool isFirstLetler = true;

			for (int i = 0; i < sentance.length(); i++)
			{
				if (sentance[i] != ' ' && isFirstLetler) {
					cout << sentance[i] << endl;
				}
				isFirstLetler = (sentance[i] == ' ' ? true : false);
			}
		}

		int main() {

			srand((unsigned)time(NULL));

			PrintFirstLetterOfWord(ReadString("Please Enter a Sentance : "));

		}
	};
	class Problem24Mycode {
		void PrintMessage(string message) {
			cout << message << endl;
		}
		int ReadNumber(string message) {

			int num = 0;
			cout << message;


			while (true) {
				if (cin >> num)
					return num;
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid Number, Enter a valid One" << endl;
				}
			}
			return num;
		}

		string ReadString(string message) {

			cout << message;

			string userInput;

			getline(cin, userInput);

			return userInput;
		}

		void UpperFirstLetters(string sentence) {
			bool isStartOfWord = true;

			for (int i = 0; i < sentence.length(); i++) {
				if (sentence[i] == ' ') {
					isStartOfWord = true;
				}
				else if (isStartOfWord) {

					sentence[i] = toupper(sentence[i]);

					cout << sentence[i] << " ";

					isStartOfWord = false;
				}
			}
			cout << endl;
		}

		int main() {

			srand((unsigned)time(NULL));

			UpperFirstLetters(ReadString("Please Enter a Sentance : "));

		}
	};
	class Problem24 {
		void PrintMessage(string message) {
			cout << message << endl;
		}
		int ReadNumber(string message) {

			int num = 0;
			cout << message;


			while (true) {
				if (cin >> num)
					return num;
				else
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Invalid Number, Enter a valid One" << endl;
				}
			}
			return num;
		}

		string ReadString(string message) {

			cout << message;

			string userInput;

			getline(cin, userInput);

			return userInput;
		}

		string UpperFirstLetters(string sentence) {
			bool isStartOfWord = true;

			for (int i = 0; i < sentence.length(); i++) {
				if (sentence[i] == ' ') {
					isStartOfWord = true;
				}
				else if (isStartOfWord) {

					sentence[i] = toupper(sentence[i]);
					isStartOfWord = false;
				}
			}
			return sentence;
		}

		int main() {

			srand((unsigned)time(NULL));

			cout << UpperFirstLetters(ReadString("Please Enter a Sentance : ")) << endl;

		}
	};
	class Problem25 {
		string ReadString(string message) {

			cout << message;

			string userInput;

			getline(cin, userInput);

			return userInput;
		}

		string LowerFirstLetters(string sentence) {
			bool isStartOfWord = true;

			for (int i = 0; i < sentence.length(); i++) {
				if (sentence[i] == ' ') {
					isStartOfWord = true;
				}
				else if (isStartOfWord) {

					sentence[i] = tolower(sentence[i]);
					isStartOfWord = false;
				}
			}
			return sentence;
		}

		int main() {

			srand((unsigned)time(NULL));

			cout << LowerFirstLetters(ReadString("Please Enter a Sentance : ")) << endl;

		};
	};
	class Problem26 {
		void PrintMessage(string message) {
			cout << message;
		}

		string ReadString(string message) {

			cout << message;

			string userInput;

			getline(cin, userInput);

			return userInput;
		}

		string PrintLowerLetters(string sentence) {

			for (int i = 0; i < sentence.length(); i++) {

				sentence[i] = tolower(sentence[i]);
			}
			return sentence;
		}

		string PrintUpperLetters(string sentence) {

			for (int i = 0; i < sentence.length(); i++) {

				sentence[i] = toupper(sentence[i]);
			}
			return sentence;
		}

		int main() {

			srand((unsigned)time(NULL));

			PrintMessage("Please Enter a Sentance : ");
			string userInput = ReadString(" ");

			PrintMessage("\nString After Lower : ");
			cout << PrintLowerLetters(userInput) << endl;
			PrintMessage("\nString After Upper : ");
			cout << PrintUpperLetters(userInput) << endl;

		}
	};
	class Problem27 {
		void PrintMessage(string message) {
			cout << message;
		}

		char ReadChar(string message) {

			cout << message;
			char letter;
			cin >> letter;

			return letter;
		}

		char InvertLetterCourse(char letter) {

			return isupper(letter) ? tolower(letter) : toupper(letter);

		}
		char InvertLetter(char letter) {
			if (isupper(letter)) {
				return tolower(letter);
			}
			else if (islower(letter)) {
				return toupper(letter);
			}
			else {
				return letter;
			}
		}
		char InvertLetterGPT(char letter) {

			if (letter > 'A' && letter < 'Z') {
				return letter = tolower(letter);
			}
			else if (letter >= 'a' && letter <= 'z') {
				return toupper(letter);
			}
			else
			{
				return letter;
			}

		}

		int main() {

			cout << InvertLetter(ReadChar("Please Enter a Letter : ")) << endl;

			PrintMessage("Char After Inverting case: \n");
		}
	};
	class Problem28 {
		void PrintMessage(string message) {
			cout << message;
		}

		char ReadChar(string message) {

			cout << message;
			char letter;
			cin >> letter;

			return letter;
		}
		string ReadString(string message) {
			cout << message;
			string userInput;

			getline(cin, userInput);

			return userInput;
		}

		char InvertLetterGPT(char letter) {

			if (letter > 'A' && letter < 'Z') {
				return letter = tolower(letter);
			}
			else if (letter >= 'a' && letter <= 'z') {
				return toupper(letter);
			}
			else
			{
				return letter;
			}

		}

		string InvertAllLetter(string sentance) {

			for (int i = 0; i < sentance.length(); i++)
			{
				sentance[i] = InvertLetterGPT(sentance[i]); // focus on the sentance[i] =  to update the letter
			}
			return sentance;
		}

		int main() {

			string sentance = InvertAllLetter(ReadString("Please Enter a String : "));

			PrintMessage("String After Inverting all Lettes Case : \n");
			PrintMessage(sentance);
		}
	};
	class Problem29MyCode {
		string ReadString(string message) {
			cout << message;
			string userInput;

			getline(cin, userInput);

			return userInput;
		}

		void CountUpperAndLowerLetters(string sentence, int& upperCtr, int& lowerCtr) {
			upperCtr = 0;
			lowerCtr = 0;

			for (char& c : sentence) {
				if (isupper(c))
					upperCtr++;
				else if (islower(c))
					lowerCtr++;
			}
		}

		int main() {
			string sentence = ReadString("Please Enter Your String? ");
			int upper = 0, lower = 0;

			CountUpperAndLowerLetters(sentence, upper, lower);

			cout << "\nString Length = " << sentence.length() << endl;
			cout << "Capital Letters Count = " << upper << endl;
			cout << "Small Letters Count = " << lower << endl;

			return 0;
		}
	};
	class Problem29CourseApproach {
		string ReadString(string message) {
			cout << message;
			string userInput;

			getline(cin, userInput);

			return userInput;
		}

		enum enWhatToCount { SmallLetters = 0, CaptialLetters = 1, All = 3 };

		short CountLetters(string sentence, enWhatToCount WhatToCount = enWhatToCount::All) {

			if (WhatToCount == enWhatToCount::All)
				return sentence.length();

			short ctr = 0;

			for (short i = 0; i < sentence.length(); i++)
			{
				if (WhatToCount == enWhatToCount::CaptialLetters && isupper(sentence[i]))
					ctr++;

				if (WhatToCount == enWhatToCount::SmallLetters && islower(sentence[i]))
					ctr++;
			}
			return ctr;
		}

		int main() {
			string sentence = ReadString("Please Enter Your String? ");

			cout << "\nString length = " << CountLetters(sentence);
			cout << "\nCapital Letter Count = " << CountLetters(sentence, enWhatToCount::CaptialLetters);
			cout << "\nSmall Letter Count = " << CountLetters(sentence, enWhatToCount::SmallLetters);
			return 0;
		}

	};
	class Problem30 {
		void PrintMessage(string message) {
			cout << message;
		}

		char ReadChar(string message) {

			cout << message;
			char input;
			cin >> input;

			return input;
		}

		string ReadString(string message) {
			cout << message;
			string userInput;

			getline(cin, userInput);

			return userInput;
		}

		enum enWhatToCount { UpperCase = 1, LowerCase = 2, Letter = 3, CountAll = 4 };


		short CountChar(string sentance, char userInput) {

			short ctr = 0;
			for (int i = 0; i < sentance.length(); i++)
			{
				if (sentance[i] == userInput) {
					ctr++;
				}
			}
			return ctr;
		}

		int main() {
			string sentence = ReadString("Please Enter Your String? ");

			char userInput = ReadChar("Please Enter A Character : ");

			cout << "Letter '" << userInput << "' Count = " << CountChar(sentence, userInput) << endl;

			return 0;
		}
	};
	class Problem31 {
		void PrintMessage(string message) {
			cout << message;
		}

		char ReadChar(string message) {

			cout << message;
			char input;
			cin >> input;

			return input;
		}

		string ReadString(string message) {
			cout << message;
			string userInput;

			getline(cin, userInput);

			return userInput;
		}

		char InvertLetterCourse(char letter) {

			return isupper(letter) ? tolower(letter) : toupper(letter);
		}

		short CountMatchCaseChar(string sentance, char userInput, bool MatchCase = true) {

			short ctr = 0;
			for (int i = 0; i < sentance.length(); i++)
			{
				if (MatchCase) {
					if (sentance[i] == userInput)
						ctr++;
				}
				else if (tolower(sentance[i]) == tolower(userInput))
				{
					ctr++;
				}
			}
			return ctr;
		}

		int main() {
			string sentence = ReadString("Please Enter Your String? ");

			char userInput = ReadChar("Please Enter A Character : ");

			cout << "Letter \'" << userInput << "\' Count = " << CountMatchCaseChar(sentence, userInput) << endl;
			cout << "Letter \'" << userInput << "' "
				<< "Or \'" << InvertLetterCourse(userInput) << "\'"
				<< "Count = " << CountMatchCaseChar(sentence, userInput, false);

			return 0;
		}
	};
	class Problem32 {
		void PrintMessage(string message) {
			cout << message;
		}

		char ReadChar(string message) {

			cout << message;
			char input;
			cin >> input;

			return input;
		}


		bool CheckVowelOrNot(char userInput, string vowels) {

			userInput = tolower(userInput);
			for (int i = 0; i < vowels.length(); i++)
			{
				if (userInput == vowels[i]) {
					return true;
				}
			}
			return false;
		}
		bool IsVowel(char Ch1) {
			Ch1 = tolower(Ch1);
			return (Ch1 == 'a' || Ch1 == 'e' || Ch1 == 'i' || Ch1 == 'o' || Ch1 == 'u');
		}
		int main() {

			char userInput = ReadChar("Please Enter A Character : ");

			string vowels = "aeiou";

			if (!CheckVowelOrNot(userInput, vowels)) {
				cout << " No Letter \'" << userInput << "\' is't vowel";
			}
			else
			{
				cout << " Yes Letter \'" << userInput << "\' is vowel";
			}

			return 0;
		}
	};
	class Problem33 {
		void PrintMessage(string message) {
			cout << message;
		}

		string ReadString(string message) {

			cout << message;
			string input;

			getline(cin, input);

			return input;

		}

		char ReadChar(string message) {

			cout << message;
			char input;
			cin >> input;

			return input;
		}

		bool IsVowel(char Ch1) {
			Ch1 = tolower(Ch1);
			return (Ch1 == 'a' || Ch1 == 'e' || Ch1 == 'i' || Ch1 == 'o' || Ch1 == 'u');
		}

		short CountAllVowels(string userInput) {

			short ctr = 0;

			for (int i = 0; i < userInput.length(); i++)
			{
				if (IsVowel(userInput[i])) {
					ctr++;
				}
			}
			return ctr;
		}

		int main() {

			string userInput = ReadString("Please Enter A Character : ");

			cout << "Number of vowels is : " << CountAllVowels(userInput) << endl;;

			return 0;
		}
	};
	class Problem34 {
		void PrintMessage(string message) {
			cout << message;
		}

		string ReadString(string message) {

			cout << message;
			string input;

			getline(cin, input);

			return input;

		}

		char ReadChar(string message) {

			cout << message;
			char input;
			cin >> input;

			return input;
		}

		bool IsVowel(char Ch1) {
			Ch1 = tolower(Ch1);
			return (Ch1 == 'a' || Ch1 == 'e' || Ch1 == 'i' || Ch1 == 'o' || Ch1 == 'u');
		}

		void CountAllVowels(string userInput) {

			short ctr = 0;

			for (int i = 0; i < userInput.length(); i++)
			{
				if (IsVowel(userInput[i])) {
					cout << userInput[i] << " ";
				}
			}
		}

		int main() {

			string userInput = ReadString("Please Enter A Character : ");

			cout << "Vowels in string are : " << endl;;
			CountAllVowels(userInput);
			return 0;
		}
	};
	class Problem35MyCode {

		string ReadString(string message) {

			cout << message;
			string input;

			getline(cin, input);

			return input;

		}

		void PrintEachWord(string userInput) {
			bool lastWasSpace = true;

			for (short i = 0; i < userInput.length(); i++) {
				if (userInput[i] == ' ') {
					if (!lastWasSpace) {
						cout << endl;
						lastWasSpace = true;
					}
				}
				else {
					cout << userInput[i];
					lastWasSpace = false;
				}
			}

			if (!lastWasSpace) {
				cout << endl;
			}
		}

		int main() {

			string userInput = ReadString("Please Enter A Character : ");

			PrintEachWord(userInput);

			return 0;
		}

	};
	class Problem35CourseApproach {

	};
	class Problem36 {
		string ReadString(string message) {

			cout << message;
			string input;

			getline(cin, input);

			return input;

		}

		short PrintEachWord(string userInput) {

			short pos = 0;

			string spaces = " ";

			string word;

			short ctr = 0;

			while ((pos = userInput.find(spaces)) != string::npos) {

				word = userInput.substr(0, pos);
				if (!word.empty()) {
					ctr++;
				}
				userInput.erase(0, pos + spaces.length());
			}
			if (!word.empty()) {
				ctr++;
			}
			return ctr;
		}

		int main() {

			string userInput = ReadString("Please Enter A Character : ");

			cout << "The number of words in your string is : " << PrintEachWord(userInput) << endl;;

			return 0;
		}
	};
	class Problem37 {
		string ReadString(string message) {

			cout << message;
			string input;

			getline(cin, input);

			return input;

		}

		vector<string> Split(string userInput, string spaces) {

			vector<string>vWords;

			short pos = 0;

			string word;

			while ((pos = userInput.find(spaces)) != string::npos) {

				word = userInput.substr(0, pos);
				if (!word.empty()) {
					vWords.push_back(word);
				}
				userInput.erase(0, pos + spaces.length());
			}
			if (!word.empty()) {
				vWords.push_back(word);
			}
			return vWords;
		}


		int main() {

			string userInput = ReadString("Please Enter A Character : ");

			vector<string> words;

			words = Split(userInput, " ");

			cout << "Tokens =  " << words.size() << endl;;

			for (auto& word : words)
			{
				cout << word << endl;
			}

			return 0;
		}
	};
	class Problem38 {
		string TrimLeft(string userInput) {

			for (short i = 0; i < userInput.length(); i++)
			{
				if (userInput[i] != ' ') {
					return userInput.substr(i, userInput.length() - i);
				}

			}
			return userInput;
		}

		string TrimRight(string userInput) {
			for (int i = userInput.length() - 1; i >= 0; i--) {
				if (userInput[i] != ' ') {
					return userInput.substr(0, i + 1);
				}
			}
			return "";
		}


		string Trim(string userInput) {
			return(TrimLeft(TrimRight(userInput)));
		}

		int main() {

			string userInput = "      Mohammad Abu Hammad      ";

			cout << "\nString     = " << userInput;
			cout << "\n\nTrim Left  = " << TrimLeft(userInput);
			cout << "\nTrim Right = " << TrimRight(userInput);
			cout << "\nTrim       = " << Trim(userInput);
			system("pause>0");
			return 0;
		}
	};
	class Problem39{
		string JoinString(vector<string>& vWord, string spaces) {

			if (vWord.empty())
				return "";

			string fullString;

			for (auto& word : vWord)
			{
				fullString += word + spaces;
			}

			return fullString.substr(0, fullString.length() - spaces.length());
		}


		int main() {

			vector<string> vWords;

			vWords.push_back("Mohammad");
			vWords.push_back("Ahmad");
			vWords.push_back("Ali");
			vWords.push_back("abuhammad");

			cout << JoinString(vWords, "###") << endl;

			system("pause>0");
			return 0;
		}
	};
	class Problem40{
		void PrintMessage(string message) {
			cout << message;
		}
		string JoinString(vector<string>& vWord, string spaces) {

			if (vWord.empty())
				return "";

			string fullString;

			for (auto& word : vWord)
			{
				fullString += word + spaces;
			}

			//return fullString.substr(0, fullString.length() - spaces.length());
			return fullString;

		}

		string JoinString(string arr[4], int length, string spaces) {

			if (length == 0)
				return "";


			string fullString;


			for (int i = 0; i < length; i++)
			{
				fullString += arr[i] + spaces;
			}

			return fullString.substr(0, fullString.length() - spaces.length());
		}

		int main() {

			vector<string> vWords;

			vWords.push_back("Mohammad");
			vWords.push_back("Ahmad");
			vWords.push_back("Ali");
			vWords.push_back("abuhammad");

			string words[] = { "MohammadArray" ,"AhmadArray" , " AliArray","AbuhammadArray" };
			short length = 4;

			PrintMessage("Using Vectors");
			cout << JoinString(vWords, "###") << endl;

			PrintMessage("Using Arrays");
			cout << JoinString(words, length, "###") << endl;

			system("pause>0");
			return 0;
		}
	};
}