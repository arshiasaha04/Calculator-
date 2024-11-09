#include<iostream>
#include<cmath>
using namespace std;

class temp {
    public:
        double a, b, c;
        char op;
        void getValue1();
        void getValue2();
        void getOp();
        void add();
        void sub();
        void mul();
        void div();
        void fact();
        void sqrtOp();
        void cbrtOp();
        void logOp();
        void percent();
        void power();
} obj;

int main()
{
    cout<<"========CALCULATOR======="<<endl;
    char choice;
    do {
        obj.getValue1();
        while (1) {
            obj.getOp();
            if (obj.op == '=') {
                cout << "\nYour Final Answer is:: " << obj.a << endl;
                break;
            }

            switch (obj.op) {
                case '!':   // Factorial
                    obj.fact();
                    break;

                case 's':   // Square root
                    obj.sqrtOp();
                    break;

                case 'c':   // Cube root
                    obj.cbrtOp();
                    break;

                case 'l':   // Logarithm
                    obj.logOp();
                    break;

                case '%':   // Percentage
                    obj.percent();
                    break;

                case '+':   // Addition
                    obj.getValue2();
                    obj.add();
                    break;

                case '-':   // Subtraction
                    obj.getValue2();
                    obj.sub();
                    break;

                case '*':   // Multiplication
                    obj.getValue2();
                    obj.mul();
                    break;

                case '/':   // Division
                    obj.getValue2();
                    obj.div();
                    break;

                case '^':   // Power
                    obj.getValue2();
                    obj.power();
                    break;

                default:
                    cout << "Invalid operator. Please try again." << endl;
            }
        }
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting the calculator. Goodbye!" << endl;
    return 0;
}

void temp::getValue1() {
    cout << "Enter the value:: ";
    cin >> a;
}

void temp::getValue2() {
    cout << "Enter the value:: ";
    cin >> b;
}

void temp::getOp() {
    cout << "Enter the operator (+, -, *, /, !, s, c, l, %, ^, =): ";
    cin >> op;
}

void temp::add() {
    c = a + b;
    cout << a << " + " << b << " :: " << c << endl;
    a = c;
    b = 0;
}

void temp::sub() {
    c = a - b;
    cout << a << " - " << b << " :: " << c << endl;
    a = c;
    b = 0;
}

void temp::mul() {
    c = a * b;
    cout << a << " * " << b << " :: " << c << endl;
    a = c;
    b = 0;
}

void temp::div() {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return;
    }
    c = a / b;
    cout << a << " / " << b << " :: " << c << endl;
    a = c;
    b = 0;
}

void temp::fact() {
    if (a < 0) {
        cout << "Error: Factorial of a negative number is not defined." << endl;
        return;
    }
    c = 1;
    for (int i = 1; i <= a; ++i) {
        c *= i;
    }
    cout << a << "!" << " :: " << c << endl;
    a = c;
}

void temp::sqrtOp() {
    if (a < 0) {
        cout << "Error: Square root of a negative number is not defined." << endl;
        return;
    }
    c = sqrt(a);
    cout << "Square root of " << a << " :: " << c << endl;
    a = c;
}

void temp::cbrtOp() {
    c = cbrt(a);
    cout << "Cube root of " << a << " :: " << c << endl;
    a = c;
}

void temp::logOp() {
    if (a <= 0) {
        cout << "Error: Logarithm of zero or a negative number is not defined." << endl;
        return;
    }
    c = log(a);
    cout << "ln(" << a << ") :: " << c << endl;
    a = c;
}

void temp::percent() {
    c = a / 100.0;
    cout << a << "% :: " << c << endl;
    a = c;
}

void temp::power() {
    c = pow(a, b);
    cout << a << "^" << b << " :: " << c << endl;
    a = c;
}

