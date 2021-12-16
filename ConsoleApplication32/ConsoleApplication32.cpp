#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, n;
    cout << "Введите значение: " << endl;
    cout << "n= ";
    cin >> n;


    cout << "an= " << (1 / ((3 * n - 2) * (3 * n + 1)))<<endl;

    system("pause");
    return 0;
}
