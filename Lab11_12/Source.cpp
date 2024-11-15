#include <iostream>
#include <forward_list>
#include <iomanip>
#include <windows.h>

using namespace std;

double calculateSum(const forward_list<double>& flist) {
    double sum = 0.0;
    for (const auto& value : flist) {
        if (value >= 15) {
            sum += value;
        }
    }
    return sum;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    forward_list<double> flist;
    int n;

    cout << "������ ������� �������� ������: ";
    cin >> n;

    cout << "������ " << n << " ������ �����:" << endl;
    for (int i = 0; i < n; ++i) {
        double value;
        cin >> value;
        flist.push_front(value);
    }

    flist.reverse();

    double sum = calculateSum(flist);

    cout << fixed << setprecision(2);
    cout << "���� �������� ������ � ��������� >= 15: " << sum << endl;

    return 0;
}
