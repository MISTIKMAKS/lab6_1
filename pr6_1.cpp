#include <iostream>

using namespace std;

int main() {
	int A[25];
	int P = 0;
	for (int i = 0; i < 25; i++)
	{
		A[i] = rand() % 90 + 5;
		if (i % 2 == 0)
		{
			if (i % 8 != 0)
			{
				P += A[i];
			}
		}
	}
	cout << "Array: ";
	for (int i = 0; i < 25; i++)
	{
		cout << "[" << i << "] " << A[i] << "   ";
	}
	cout << "   Result = " << P;
}