#include <iostream>
#include <string>
using namespace std;

string DecToOctal(int D) {
    if (D == 0) return "0";
    if (D < 0) return "Error: negative number"; // ќбробка в≥д'Їмних чисел

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
    cout << "¬вед≥ть дес€ткове число: ";
    cin >> number;
    if (number < 0) {
        cout << "Ѕудь ласка, введ≥ть додатне число." << endl;
        return 1;
    }
    cout << "„исло у в≥с≥мков≥й систем≥: " << DecToOctal(number) << endl;
    return 0;
}
