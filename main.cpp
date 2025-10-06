#include<iostream>
using namespace std;

int ostanek(int a,int b)
{
    return a%b;
}

int main() {
    double num1, num2;
    char op;

    cout << "Vnesi problem (5 + 3): ";
    cin >> num1 >> op >> num2;

    double result;

    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*') {
        result = num1 * num2;
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            cout << "Napaka! Deljenje z 0." << endl;
            return 1;
        }
    }else if (op=='%')
    {
        result = ostanek(num1, num2);
    }

    else {
        cout << "Napaka! Neznan operator." << endl;
        return 1;
    }

    cout << "Non fast forward"<< endl;

    cout<<"Prva sprememba\n";
    cout << "Rezultat: " << result << endl;
    return 0;
}