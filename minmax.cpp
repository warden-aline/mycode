#include <iostream>
using namespace std;
int main()
{
	int A[5] = { 1,2,3,4,5 };
	int B[10] = { -1,0,1,3,5,7,8,-8,15,-21 };
	int C[15] = { 533,-533,-533,533,-533,0,1,533,-533,533,534,535,-535,535, 0};
	int N = 5;
	int max = A[0];
	int min = A[0];
	for (int i = 0; i < N; i++){
		if (max < A[i]) 
		{
			max = A[i];
		}
	}
	for (int i = 0; i < N; i++) {
		if (A[i] < min)
		{
			min = A[i];
		}
	}
	cout << max << endl;
	cout << min << endl;
	system("pause");
	return 0;
}
