#include <iostream>
#define N 100

using namespace std;

void print_array(int n, int A[]);

int fill_in_array(int A[])
{
	int elements_lim, x;
	cout << "How many elements?" << endl;
	cin >> elements_lim;

	for (int i = 0; i < elements_lim; i++)
	{
		cin >> x;
		A[i] = x;
	}

	return elements_lim;
}


int main()
{
	int A[N];
	int n = fill_in_array(A);

	print_array(n, A);

	system("pause");
	return 0;
}

void print_array(int n, int A[])
{

	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
}
