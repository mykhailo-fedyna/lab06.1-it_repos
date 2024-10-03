// lab6.1(it).cpp
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* r, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		r[i] = Low + rand() % (High - Low + 1);
}
void Print(int* r, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << r[i];
	cout << endl;
}
int Sum(int* r, const int size, int& count_element)
{
	int S = 0;
	count_element = 0;
	for (int i = 0; i < size; i++)
		if ((r[i] % 6 == 0) || !(i % 5 == 0))
		{
			S += r[i];
			count_element++;
			r[i] = 0;
		}
	return S;
}
int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int r[n];
	int Low = 4;
	int High = 73;
	int count_element;
	Create(r, n, Low, High);
	Print(r, n);

	int sum = Sum(r, n, count_element);
	cout << "S = " << sum << endl;
	cout << "Count of element = " << count_element << endl;
	Print(r, n);
	return 0;
}
