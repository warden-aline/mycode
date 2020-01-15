#include <iostream>
#define N 5

using namespace std;

void print_array(int A[]);

int main()
{
	int A[N] = {1, 2, 3, 4, 5};
	int tmp = A[0];

	for (int i = 0; i < N-1; i++)
	{
		A[i] = A[i + 1];
	}

	A[N-1] = tmp;
	
	print_array(A);

	system("pause");
	return 0;
}

void print_array(int A[])
{
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
}
