#include <iostream>
#include <iomanip>
#include <time.h>
#include<Windows.h>
using namespace std;

int Sum(int mas[], const int n, int i, int s);
int Count(int mas[], const int n, int i, int count);
void RandMas(int mas[], const int n, int i)
{
    int A = -5, B = 12;
    mas[i] = (A)+rand() % (B - (A)+1);
    cout << mas[i] << ' ';
    if (i < n - 1) RandMas(mas, n, i + 1);

}
void Swap(int mas[], const int n, int i)
{

    if (!(mas[i] < 0) && !((mas[i] % 2) == 1))
    {
        mas[i] = 0;
        cout << mas[i] << ' ';
    }
    else cout << mas[i] << ' ';
    if (i < n - 1) Swap(mas, n, i + 1);

}
int main()
{
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    const int k = 24;
    int t[k];
    int s = 0;
    int count = 0;
    RandMas(t, k, 0);
    cout << endl;
    cout << "Сума " << Sum(t, k, 0, 0);
    cout << endl;
    cout << "Кількість  " << Count(t, k, 0, 0);
    cout << endl;
    Swap(t, k, 0);

}
int Sum(int mas[], const int n, int i, int s)
{

    if (!(mas[i] < 0) && !((mas[i] % 2) == 1)) s += mas[i];;
    if (i < n - 1) Sum(mas, n, i + 1, s);
    else return s;
}
int Count(int mas[], const int n, int i, int count)
{

    if (!(mas[i] < 0) && !((mas[i] % 2) == 1)) count++;
    if (i < n - 1) Count(mas, n, i + 1, count);
    else return count;
}