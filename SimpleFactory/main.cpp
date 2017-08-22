#include <iostream>

using namespace std;

class Operation {
public:
    double GetResult(double numberA, double numberB, char operate) {
        double result = 0;
        switch (operate) {
            case '+':
                result = numberA + numberB;
                break;
            case '-':
                result = numberA - numberB;
                break;
            case '*':
                result = numberA * numberB;
                break;
            case '/':
                if (numberB == 0) {
                    cout << "error" << endl;
                    return 0;
                }
                result = numberA / numberB;
                break;
            default:
                break;
        }
    }
};


int main() {
    try {
        int numberA, numberB;
        char c;
        cout << "input number A:" << endl;
        cin >> numberA;
        cout << "input operator(+-*/):" << endl;
        cin >> c;
        cout << "input number B:" << endl;
        cin >> numberB;

        int d = 0;

        cout << "answer:" << d << endl;
    }
    catch (exception& e) {
        cout << "exception" << e.what()<<endl;
    }

    return 0;
}