#include <iostream>
#include <iomanip>
#include <time.h>
#include<Windows.h>
using namespace std;

int Sum(int mas[], const int n);
int Count(int mas[], const int n);
void RandMas(int mas[], const int n)
{
	int A = -5, B = 12;
	for (int i = 0; i < n; i++)
	{
		mas[i] = (A)+rand() % (B - (A)+1);
		cout << mas[i] << ' ';
	}
}
void Swap(int mas[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (!(mas[i] < 0) && !((mas[i] % 2) == 1))
		{
			mas[i] = 0;
			cout << mas[i] << ' ';
		}
		else cout << mas[i] << ' ';
	}
}
int main()
{
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	const int k = 24;
	int t[k];
	RandMas(t, k);
	cout << endl;
	cout << "Сума = " << Sum(t, k);
	cout << endl;
	cout << "Кількість = " << Count(t, k);
	cout << endl;
	Swap(t, k);

}
int Sum(int mas[], const int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		if (!(mas[i] < 0) && !((mas[i] % 2) == 1)) s += mas[i];;
	}
	return s;
}
int Count(int mas[], const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{

		if (!(mas[i] < 0) && !((mas[i] % 2) == 1)) count++;
	}
	return count;
}