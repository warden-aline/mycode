#include <iostream>
#define N 5
using namespace std;


void timur_durachok(int B[]) 
{
	for (int i = 0; i < N; i++)
		cout << B[i] << " ";
}


int main()
{
	int A[N] = {1,2,3,4,5};
	int B[N] = { 0 };

	for (int i = 0; i < N; i++)
	{
		B[i] = A[i];
	}

	timur_durachok(B);

	system("pause");
	return 0;
}
