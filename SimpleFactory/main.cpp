#include <iostream>

using namespace std;

class Operation {
public:
    Operation(double a, double b) {
        _numberA = a;
        _numberB = b;
    }

    virtual double GetResult() {}

    double getA() {
        return _numberA;
    }

    void setA(double value) {
        _numberA = value;
    }

    double getB() {
        return _numberB;
    }

    void setB(double value) {
        _numberB = value;
    }

private:
    double _numberA = 0;
    double _numberB = 0;
};


class OperationAdd : public Operation {
public:
    OperationAdd(double a, double b) : Operation(a, b) {

    }

    double GetResult() override {
        double result = 0;
        result = getA() + getB();
        return result;
    }
};

class OperationSub : public Operation {
public:
    OperationSub(double a, double b) : Operation(a, b) {

    }

    double GetResult() override {
        double result = 0;
        result = getA() - getB();
        return result;
    }
};

class OperationMul : public Operation {
public:
    OperationMul(double a, double b) : Operation(a, b) {

    }

    double GetResult() override {
        double result = 0;
        result = getA() * getB();
        return result;
    }
};

class OperationDiv : public Operation {
public:
    OperationDiv(double a, double b) : Operation(a, b) {}

    double GetResult() override {
        double result = 0;
        if (getB() == 0) {
            return 1;
        }

        result = getA() / getB();
        return result;
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
    catch (exception &e) {
        cout << "exception" << e.what() << endl;
    }

    return 0;
}