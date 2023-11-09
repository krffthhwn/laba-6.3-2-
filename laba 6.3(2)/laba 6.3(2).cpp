#include<iostream>
#include<iomanip>
#include <time.h>

using namespace std;

template <typename Type>
Type SumT(Type* q, Type size, Type i, Type S)
{
	if (q[i] % 2 != 0)
		S += q[i];

	if (i < size - 1)
		return SumT(q, size, i + 1, S);

	else
		return S;
}
template <typename Type>
void CreateT(Type* q, Type size, Type Low, Type High, Type i)
{
	q[i] = Low + rand() % (High - Low + 1);

	if (i < size - 1)

		CreateT(q, size, Low, High, i + 1);

}
template <typename Type>
void PrintT(Type* q, Type size, Type i)
{
	cout << setw(4) << q[i];

	if (i < size - 1)
		PrintT(q, size, i + 1);

	else
		cout << endl;

}

int Sum(int* q, int size, int i, int S)
{
	if (q[i] % 2 != 0)
		S += q[i];

	if (i < size - 1)
		return Sum(q, size, i + 1, S);

	else
		return S;
}

void Create(int* q, int size, int Low, int High, int i)
{
	q[i] = Low + rand() % (High - Low + 1);

	if (i < size - 1)
		Create(q, size, Low, High, i + 1);

}

void Print(int* q, int size, int i)
{
	cout << setw(4) << q[i];

	if (i < size - 1)
		Print(q, size, i + 1);

	else
		cout << endl;

}
int main()
{
	srand((unsigned)time(NULL));
	int s;
	cout << "s = "; cin >> s;
	int* d = new int[s];

	int Low = 1;
	int High = 20;

	Create(d, s, Low, High, 0);
	cout << "q[s] =";
	Print(d, s, 0);
	cout << "Sum = " << Sum(d, s, 0, 0) << endl;
	delete[] d;

	int* c = new int[s];
	CreateT(c, s, Low, High, 0);

	cout << "q[s] =";
	PrintT(c, s, 0);

	cout << "Sum = " << SumT(c, s, 0, 0) << endl;

	delete[] c;

	return 0;
}
