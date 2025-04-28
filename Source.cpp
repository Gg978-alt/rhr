#include <iostream>
#include <string>
using namespace std;

string DecToOctal(int D) {
    if (D == 0) return "0";
    if (D < 0) return "Error: negative number"; // ������� ��'����� �����

    string result = "";

    while (D > 0) {
        int remainder = D % 8;
        result = char(remainder + '0') + result;
        D = D / 8;
    }

    return result;
}

int main() {
    int number;
    cout << "������ ��������� �����: ";
    cin >> number;
    if (number < 0) {
        cout << "���� �����, ������ ������� �����." << endl;
        return 1;
    }
    cout << "����� � ������� ������: " << DecToOctal(number) << endl;
    return 0;
}
